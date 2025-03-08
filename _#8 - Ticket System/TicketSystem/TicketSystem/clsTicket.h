#pragma once
#include <string>
#include <stack>
#include <queue>
#include <ctime>

using namespace std;

class clsTicket
{
protected:
	int _TicketTotal = 0;
	string _Prefix = "";
	short _AverageServeTime = 0;

	struct stTickets
	{
		string Number;
		string DateTime;
		short WaitingClients = 0;
		int TimeToWait = 0;
	};

	queue <stTickets> _TicketList;

public:
	clsTicket(string prefix, int serveTime) 
	{

	};

	void IssueTicket()
	{

	}

	void PrintInfo()
	{

	}
};

