#include "CheckLogin.h"

User* CheckLogin::Login(User** users, std::string enteredLogin, std::string enteredPassword, int usersCount)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}

			throw std::exception("Uncorrect password");
		}
	}

	return nullptr;
}