#pragma once
#include <iostream>
using namespace std;

enum TypeOfArticle
{
	News = 1,
	Commercial,
	Review
};

class Article
{
private:
	int _ID;
	string _headLine;
	TypeOfArticle _type;
	string _text;
public:
	Article();
	int GetID();
	void SetID(int newID);
	string GetHeadLine();
	void SetHeadLine(string newHeadLine);
	TypeOfArticle GetTypeOfArticle();
	void SetTypeOfArticle(TypeOfArticle newType);
	string GetText();
	string SetText(string newText);
};