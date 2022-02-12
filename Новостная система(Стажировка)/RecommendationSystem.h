#pragma once
#include <map>
#include "Article.h"
#include <list>
using namespace std;

class RecommendationSystem
{
private:
	map<string, list<Article>> _redList;
public:
	RecommendationSystem();
	void FixReading(string user, Article newArticle);
};