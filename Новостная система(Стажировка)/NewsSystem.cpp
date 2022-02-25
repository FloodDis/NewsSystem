#include "NewsSystem.h"

Article NewsSystem::GetRecommendation(string user)
{
	return _recommendationSystem.GetRecommendation(user, _articles);
}

void NewsSystem::AddArticle(Article newArticle)
{
	_articles.push_back(newArticle);
	_popularity.insert({ newArticle.GetID(),0 });
}

void NewsSystem::DeleteArticle(Article articleToDelete)
{
	list<Article> ::iterator it;
	int idToDelete;
	for (it = _articles.begin(); it != _articles.end(); it++)
	{
		if (it->GetHeadLine() == articleToDelete.GetHeadLine())
		{
			idToDelete = it->GetID();
			_articles.erase(it);
		}
	}
	map <int, int> ::iterator it1;
	it1 = _popularity.find(idToDelete);
	_popularity.erase(it1);
}

list<pair<int, string>> NewsSystem::GetPopular(int articlesCount)
{
	list<pair<int, string>> popular;

}