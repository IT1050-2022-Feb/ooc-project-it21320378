#include "Payment.h"
#define SIZE 2

class Report
{
private:
	char ReportID[10];
	Payment *payment[SIZE];
public:
	Report();
	Report(const char pReportID[], int pay1, int pay2);
	void bookingReport();
	void paymentReport();
	void bookedItemList();
	~Report();
}