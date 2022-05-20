#include guest.h

class vendor : public guest {
	protected :
		int vendorID;
		char vendorName;
		char vendorUsername;
		char vendorPassword;

	public:
		vendor(){};
		void vendorLogin();
		void displayVendorDetails();
		void logout();
		~vendor();
      };