#include "Article.h"

Article::Article()
{
	_id = 0;
	_headLine = "";
	_type = News;
	_text = "";
}

int Article::GetID()
{
	return _id;
}

void Article::SetID(int newID)
{
	_id = newID;
}

string Article::GetHeadLine()
{
	return _headLine;
}

void  Article::SetHeadLine(string newHeadLine)
{
	_headLine = newHeadLine;
}

TypeOfArticle Article::GetTypeOfArticle()
{
	return _type;
}

void Article::SetTypeOfArticle(TypeOfArticle newType)
{
	_type = newType;
}

string Article::GetText()
{
	return _text;
}

void Article::SetText(string newText)
{
	_text = newText;
}