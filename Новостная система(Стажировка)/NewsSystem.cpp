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

//TODO: дописать метод
list<pair<int, string>> NewsSystem::GetPopular(int articlesCount)
{
	list<pair<int, string>> popular;
	map <int, int> ::iterator it1;
	vector<map <int, int> ::iterator> iterators;
	int j = 0;
	for (it1 = _popularity.begin(); it1 != _popularity.end(); it1++)
	{
		iterators.resize(j + 1);
		iterators.push_back(it1);
	}
	map <int, int> ::iterator temp;
	for (int i = 0; i < iterators.size() - 1; i++)
	{
		for (int j = 0; j < iterators.size() - 1 - i; j++)
		{
			if (iterators[j]->second > iterators[j + 1]->second)
			{
				temp = iterators[j];
				iterators[j] = iterators[j + 1];
				iterators[j + 1] = temp;
			}
		}
	}
}