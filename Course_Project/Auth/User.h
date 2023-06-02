#pragma once
#include <string>
#include <vector>

namespace User {
  public struct USER {
        int id;
        std::string login;
        std::string password;
        bool is_admin;
    };
  public struct CURRENT_USER {
        int UserId;
        std::string login;
        bool is_admin;
    };
	int SignUp(std::string login,std::string password);
	int SignIn(std::string login, std::string password);
    User::CURRENT_USER GetCurrent();
    User::USER GetUser(int UserId);
}