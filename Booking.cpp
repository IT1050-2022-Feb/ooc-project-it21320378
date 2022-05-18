#include "Booking.h"
#include "Hotel.h"
#include "WeddingItem.h"
#include "Payment.h"
#include <cstring>

Booking::Booking()
{
	strcpy(BookingID, "No-ID");
	strcpy(BookingDate, "No-Date");
	BookingPrice= 0;
	strcpy(BookingConfirm, "");
	strcpy(BookingDescription, "");
}

Booking::Booking(const char pBookingID[], const char pBookingDate[], float pBookingPrice, const char pBookingConfirm[], const char BookingDescription[], int hotel1, int hotel2, int witem1, int witem2, int pay1, int pay2)
{
	strcpy(BookingID, pBookingID);
	strcpy(BookingDate, pBookingDate);
	BookingPrice= pBookingPrice;
	strcpy(BookingConfirm, pBookingConfirm);
	strcpy(BookingDescription, pBookingDescription);
}

void Booking::calcBookingPrice()
{

}

void Booking::displayBookingPrice()
{

}

void Booking::addBooking()
{

}

void Booking::bookingReceptionist(Receptionist *pRecep)
{

}

Booking::~Booking()
{
	for(int i=0; i< SIZE; i++)
	{
		delete hotel[i];
		delete weddingitem[i];
		delete payment[i];
	}
}