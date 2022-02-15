#include "RecommendationSystem.h"

void RecommendationSystem::FixReading(string user, Article newArticle)
{
	list<Article> newList;
	newList.push_back(newArticle);
	_readList.insert(user, newList);
}

Article RecommendationSystem::GetRecommendation(string user, list<Article> avaibleArticles)
{

}