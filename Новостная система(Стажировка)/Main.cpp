#include "SServer.h"
#include "NewsSystem.h"

int main()
{
	SServer server;
	server.port = 3487;//���� ��� ushort - ��� ��� cin.get() � �.�. 
	//������� ��� ������� �����������. ����� ������ �������
	server.startServer();
	return 0;
}