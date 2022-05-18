class Payment
{
private:
	char PaymentId[10];
	char PaymentType[10];
	float PaidAmmount;
public:
	Payment();
	Payment(const char pPaymentId[], const char pPaymentType[], float pPaidAmmount);
	void checkPayment();
	void confirmPayment();
	void displayPaymentDetails();
	~Payment();
};