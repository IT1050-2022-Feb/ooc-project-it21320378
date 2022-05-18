#include "Guest.h"
#include "Couple.h"
#include "Vendor.h"
#include "Hotel.h"
#include "WeddingItem.h"
#include "Receptionist.h"
#include "Booking.h"
#include "Payment.h"
#include "Staff.h"
#include "Report.h"

#include <iostream>
using namespace std;

int main()
{

	//Object Creation-------------------
	Guest *guest = new Guest(); //Guest class - Object
	Couple *couple = new Couple(); //Couple class - Object
	Vendor *vendor = new Vendor(); //Vendor class - Object
	Hotel *hotel = new Hotel(); //Hotel class - Object
	WeddingItem *weddingItem = new WeddingItem(); //WeddingItem class - Object
	Receptionist *receptionist = new Receptionist(); //Receptionist class - Object
	Booking *booking = new Booking(); //Booking class - Object
	Payment *payment = new Payment(); //Payment class - Object
	Staff *staff = new Staff(); //Staff class - Object
	Report *report = new Report(); //Report class - Object

	//Method Calling--------------------
	guest->registerUser();
	guest->searchHotels();
	
	couple->bookHotelAndItems();
	couple->makePayment();
	
	vendor->vendorLogin();
	vendor->displayVendorDetails();
	
	hotel->updateHotelDetails();
	hotel->displayHotelChargers();

	weddingItem->AddItem();
	weddingItem->displayItemPrice();

	receptionist->chooseHotels();
	receptionist->bookWeddingItem();

	booking->displayBookingPrice();
	booking->addBooking();

	payment->confirmPayment();
	payment->displayPaymentDetails();

	staff->loginToSystem();
	staff->updateSystem();

	report->bookingReport();
	report->bookedItemList();

	//Delete dynamic objects------------
	delete guest;
	delete couple;
	delete vendor;
	delete hotel;
	delete weddingItem;
	delete receptionist;
	delete booking;
	delete payment;
	delete staff;
	delete report;
	
return 0;
}