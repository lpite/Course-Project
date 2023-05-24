#pragma once
#include <string>
#include <vector>

namespace User {
    struct USER {
        int id;
        std::string login;
        std::string password;
        bool is_admin;
    };
    struct CURRENT_USER {
        std::string login;
        bool is_admin;
    };
	int SignUp(std::string login,std::string password);
	int SignIn(std::string login, std::string password);
    std::vector<User::CURRENT_USER,std::allocator<User::CURRENT_USER>> GetCurrent();
}