#include "SServer.h"
#include "NewsSystem.h"

int main()
{
	SServer server;
	server.port = 3487;//порт это ushort - так что cin.get() и т.п. 
	//функции тут работаю некорректно. Лучше задать вручную
	server.startServer();
	return 0;
}