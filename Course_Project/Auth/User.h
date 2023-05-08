#pragma once

namespace User {
    struct USER {
        int id;
        std::string login;
        std::string password;
        bool is_admin;
    };
	int SignUp(std::string login,std::string password);
	int SignIn(std::string login, std::string password);
	std::vector<User::USER,std::allocator<User::USER>> GetCurrent();
}