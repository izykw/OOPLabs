#pragma once
#ifndef _POST_H_
#define _POST_H_

#include <string>

class Post
{
public:
	Post(std::string title, std::string text);

	void SetTitle(std::string title);
	void SetText(std::string text);

	std::string GetTitle();
	std::string GetText();

private:
	std::string _title;
	std::string _text;
};

#endif // !_POST_H_
