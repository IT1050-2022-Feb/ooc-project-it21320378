#include "Payment.h"
#include <cstring>

Payment::Payment()
{
	strcpy(PaymentId, "No-ID");
	strcpy(PaymentType, "No-Type");
	PaidAmmount= 0;
}

Payment::Payment(char pPaymentId[], char pPaymentType[], float pPaidAmmount)
{
	strcpy(PaymentId, pPaymentId);
	strcpy(PaymentType, pPaymentType);
	PaidAmmount= pPaidAmmount;
}

void checkPayment()
{

}

void confirmPayment()
{

}

void displayPaymentDetails()
{

}

Payment::~Payment()
{

}