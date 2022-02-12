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