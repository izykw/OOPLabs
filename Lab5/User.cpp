#include "User.h"

User::User(std::string login, std::string password, int id)
{
	SetLogin(login);
	SetPassword(password);
	SetId(id);
}


void User::SetId(int id)
{
	Validator::AssertPositiveValue(id);
	this->_id = id;
}

void User::SetLogin(std::string login)
{
	Validator::AssertStringValidate(login);
	this->_login = login;
}

void User::SetPassword(std::string password)
{
	this->_password = password;
}


int User::GetId() 
{ 
	return this->_id;
}

std::string User::GetLogin() 
{ 
	return this->_login;
}

std::string User::GetPassword() 
{ 
	return this->_password;
}


bool User::IsCorrectPassword(std::string password)
{
	return (password == _password);
}
