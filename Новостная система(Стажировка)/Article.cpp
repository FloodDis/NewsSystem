#include "Article.h"

Article::Article()
{
	_ID = 0;
	_headLine = "";
	_type = News;
	_text = "";
}

int Article::GetID()
{
	return _ID;
}

void Article::SetID(int newID)
{
	_ID = newID;
}

string Article::GetHeadLine()
{
	return _headLine;
}

void  Article::SetHeadLine(string newHeadLine)
{
	_headLine = newHeadLine;
}