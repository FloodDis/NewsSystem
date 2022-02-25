#include "NewsSystem.h"

Article NewsSystem::GetRecommendation(string user)
{
	return _recommendationSystem.GetRecommendation(user, _articles);
}