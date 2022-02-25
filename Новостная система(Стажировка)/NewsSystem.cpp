#include "NewsSystem.h"

Article NewsSystem::GetRecommendation(string user)
{
	return _recommendationSystem.GetRecommendation(user, _articles);
}

void NewsSystem::AddArticle(Article newArticle)
{
	_articles.push_back(newArticle);
}