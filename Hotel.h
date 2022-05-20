class hotel :{
	private :
		int hotelID;
		char hotelLocation [20];
		double hotelPrice;
		char hotelFacilities [20];
		double hotelChargers;

	public:
		hotel();
		void hotelDetails();
		void deleteHotelDetails();
		void updateHotelDetails();
		void calculateHotelChargers();
		void displayHotelDetails();
		void displayHotelfacilities();
		void displayHotelChargers();
		~hotel();
		
};
