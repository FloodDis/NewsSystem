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

Article RecommendationSystem::GetRecommendation(string user,
	list<Article> avaibleArticles)
{
	map <string, list<Article>> ::iterator it;
	it = _readList.find(user);
	if (it == _readList.end())
	{
		throw "User is not in the dictionary";
	}
	int newsCount = 0;
	int commercialCount = 0;
	int reviewCount = 0;
	it = _readList.begin();
	for (auto iter = it->second.begin(); iter != it->second.end(); iter++)
	{
		if (iter->GetTypeOfArticle() == News)
		{
			newsCount++;
		}
		else if (iter->GetTypeOfArticle() == Commercial)
		{
			commercialCount++;
		}
		else if (iter->GetTypeOfArticle() == Review)
		{
			reviewCount++;
		}
	}
	TypeOfArticle favoriteType = News;
	int max = newsCount;
	if (commercialCount > max)
	{
		max = commercialCount;
		favoriteType = Commercial;
	}

	if (reviewCount > max)
	{
		favoriteType = Review;
	}

	for (auto iter = avaibleArticles.begin(); iter != avaibleArticles.end(); iter++)
	{
		if (iter->GetTypeOfArticle() != favoriteType)
		{
			iter = avaibleArticles.erase(iter);
		}
	}

	it = _readList.find(user);

	for (auto iter1 = it->second.begin(); iter1 != it->second.end(); iter1++)
	{
		for (auto iter2 = avaibleArticles.begin(); iter2 != avaibleArticles.end(); iter2++)
		{
			if (iter1->GetID() == iter2->GetID())
			{
				iter2 = avaibleArticles.erase(iter2);
			}
		}
	}

	return *avaibleArticles.begin();
}