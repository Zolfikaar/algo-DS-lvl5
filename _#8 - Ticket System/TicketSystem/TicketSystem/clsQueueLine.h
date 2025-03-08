#pragma once

#include "clsPayBill.h"
#include "clsSubscriptions.h"

using namespace std;

class clsQueueLine
{
private:
	struct stTickets
	{
		string Number;
		string DateTime;
		short WaitingClients = 0;
		int TimeToWait = 0;
	};

	queue <stTickets> _Tickets;

	int _TicketTotal = 0;
	string _Prefix = "";
	short _AverageServeTime = 0;

public:
	clsQueueLine(string prefix = "", int serveTime = 0)
	{
		_Prefix = prefix;
		_AverageServeTime = serveTime;
	};
	

	void IssueTicket()
	{
		//_Ticket.IssueTicket();
	}

	void PrintInfo()
	{
		//_Ticket.PrintInfo();
	}
};

