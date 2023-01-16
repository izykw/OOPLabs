#include "Post.h"

Post::Post(std::string title, std::string text)
{
	SetTitle(title);
	SetText(text);
}


void Post::SetTitle(std::string title)
{
	this->_title = title;
}

void Post::SetText(std::string text)
{
	this->_text = text;
}


std::string Post::GetTitle() 
{ 
	return this->_title;
}

std::string Post::GetText() 
{ 
	return this->_text; 
}
