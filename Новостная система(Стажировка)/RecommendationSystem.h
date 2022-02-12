#pragma once
#include <map>
#include "Article.h"
#include <list>
using namespace std;

class RecommendationSystem
{
private:
	map<string, list<Article>> _readList;
public:
	void FixReading(string user, Article newArticle);
	Article GetRecommendation(string user, list<Article> avaibleArticles);
};