#include "Report.h"
#include "Payment.h"
#include <cstring>

Report::Report()
{
	strcpy(ReportID, "No-ID");
}

Report::Report(const char pReportID[], int pay1, int pay2)
{
	strcpy(ReportID, pReportID);
	
}

void Report::bookingReport()
{

}

void Report::paymentReport()
{

}

void Report::bookedItemList()
{

}

Report::~Report()
{
	for(int i=0; i< SIZE; i++)
	{
		delete payment[i];
	}
}