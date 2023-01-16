#pragma once
#ifndef _LOGIN_H_
#define _LOGIN_H_

#include "User.h"

static class CheckLogin
{
public:
	static User* Login(User** users, std::string enteredLogin, std::string enteredPassword, int usersCount);
};

#endif // !_LOGIN_H_
