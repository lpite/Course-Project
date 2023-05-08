#include <sqlite_orm/sqlite_orm.h>
#include <string>
#include <iostream>

#include "User.h"


using namespace sqlite_orm;
using namespace User;

auto storage = make_storage(
	"test.db",
	make_unique_index("idx_user_login", &User::USER::login, &User::USER::login),
	make_table("user",
		make_column("ID", &User::USER::id, primary_key().autoincrement()),
		make_column("login", &User::USER::login),
		make_column("password", &User::USER::password),
		make_column("is_admin", &User::USER::is_admin)),
	make_table("current_user",
		make_column("login", &User::CURRENT_USER::login),
		make_column("is_admin", &User::CURRENT_USER::is_admin))
);


int User::SignUp(std::string login, std::string password)
{
	storage.sync_schema();

	User::USER user{
		-1,
		login,
		password,
		0
	};
	try {
		storage.insert(user);
	}
	catch (const std::system_error& e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}

int User::SignIn(std::string login, std::string password)
{	
	storage.sync_schema();
	try
	{
		auto user = storage.get_all<User::USER>(where(c(&User::USER::login) == login and c(&User::USER::password) == password));
		std::cout << "notJohn count = " << user.size() << std::endl;
		if (user.size())
		{
			User::CURRENT_USER current_user{
				user[0].login,
				user[0].is_admin,
			};
			storage.remove_all<User::CURRENT_USER>();
			storage.insert(current_user);

			std::cout << "user = " << storage.dump(user[0]) << std::endl;
			return 0;
		}
		return 1;

	}
	catch (const std::system_error& e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

}

std::vector<User::CURRENT_USER, std::allocator<User::CURRENT_USER>> User::GetCurrent()
{
		auto current_user = storage.get_all<User::CURRENT_USER>();
		if (current_user.size())
		{
			return current_user;
		}
}


