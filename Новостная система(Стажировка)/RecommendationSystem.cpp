#include "RecommendationSystem.h"

void RecommendationSystem::FixReading(string user, Article newArticle)
{
	map <string, list<Article>> ::iterator it;
	it = _readList.find(user);
	if (it == _readList.end())
	{
		list<Article> newList;
		newList.push_back(newArticle);
		_readList.insert({ user, newList });
	}
	else
	{
		it->second.push_back(newArticle);
	}
}

Article RecommendationSystem::GetRecommendation(string user, list<Article> avaibleArticles)
{

}