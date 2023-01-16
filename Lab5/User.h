#pragma once
#ifndef _USER_H_
#define _USER_H_

#include <string>

#include "Validator.h"

class User
{
public:
	User(std::string login, std::string password, int id);

	void SetLogin(std::string login);
	void SetPassword(std::string password);

	std::string GetLogin();
	std::string GetPassword();
	int GetId();

	bool IsCorrectPassword(std::string password);

private:
	int _id;
	std::string _login;
	std::string _password;
	void SetId(int id);
};

#endif // !_USER_H_


