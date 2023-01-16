#pragma once
#ifndef _PAIDUSER_H_
#define _PAIDUSER_H_

#include "User.h"
#include "Post.h"

class PaidUser : public User
{
public:
	PaidUser(Post* posts, std::string login, std::string password, int id, int postsCount);
	PaidUser(std::string login, std::string password, int id);

	void SetPosts(Post* posts, int postsCount);

	Post* GetPosts();
	int GetPostsCount();

private:
	Post* _posts;
	int _postsCount;
};

#endif // !_PAIDUSER_H_



