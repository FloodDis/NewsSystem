#pragma once
#include "Article.h"
#include "RecommendationSystem.h"
#include <vector>

class NewsSystem
{
private:
	list<Article> _articles;
	map<int, int> _popularity;
	RecommendationSystem _recommendationSystem;
public:
	void AddArticle(Article newArticle);
	void DeleteArticle(Article articleToDelete);
	list<pair<int, string>> GetPopular(int articlesCount);
	Article GetArticle(int id, string user);
	Article GetRecommendation(string user);
};