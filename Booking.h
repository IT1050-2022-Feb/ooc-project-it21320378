#include "Hotel.h"
#include "WeddingItem.h"
#include "Payment.h"
#include "Couple.h"
#include "Vendor.h"
#define SIZE 2

class Booking
{
private:
	char BookingID[10];
	char BookingDate[10];
	float BookingPrice;
	char BookingConfirm[10];
	char BookingDescription[30];

	Hotel *hotel[SIZE];
	WeddingItem *weddingitem[SIZE];
	Payment *payment[SIZE];
	Couple *couple[SIZE];
	Vendor *vendor[SIZE];

public:
	Booking();
	Booking(const char pBookingID[], const char pBookingDate[], float pBookingPrice, const char pBookingConfirm[], const char BookingDescription[], int hotel1, int hotel2, int witem1, int witem2, int pay1, int pay2);
	
	void calcBookingPrice();
	void displayBookingPrice();
	void addBooking();
	void bookingReceptionist(Receptionist *pRecep);
	~Booking();
};