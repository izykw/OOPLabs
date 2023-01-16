#include "PaidUser.h"

PaidUser::PaidUser(Post* posts, std::string login, std::string password, const int id, const int postsCount) : User(login, password, id)
{
	SetPosts(posts, postsCount);
}

PaidUser::PaidUser(std::string login, std::string password, int id) :
	PaidUser(nullptr, login, password, id, 0)
{
}


void PaidUser::SetPosts(Post* posts, int postsCount)
{
	Validator::AssertPositiveValue(postsCount); //TODO: Количетсво постов может быть = 0?
	_posts = posts;
	_postsCount = postsCount;
}


Post* PaidUser::GetPosts() 
{ 
	return _posts; 
}

int PaidUser::GetPostsCount() 
{ 
	return _postsCount; 
}