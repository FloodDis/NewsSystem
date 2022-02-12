#pragma once
#include "Article.h"
#include "RecommendationSystem.h"

class NewsSystem
{
private:
	list<Article> _articles;
	map<int, int> _popularity;
	RecommendationSystem _recommendationSystem;
public:
	void AddArticle(Article newArticle);
};