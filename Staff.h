#include "Report.h"
#include "Receptionist.h"
#define SIZE 2
class Staff
{
private:
	int StaffMemberID;
	char StaffMemberName[20];
	char StaffMemberEmail[25];
	int StaffMemberPNumber;
	char StaffMemberUsername[10];
	char StaffMemberPassword[10];

	Report *report[SIZE];
	Receptionist *receptionist[SIZE];
public:
	Staff();
	Staff(int pStaffMemberID, const char pStaffMemberName[], const char pStaffMemberEmail[], int pStaffMemberPNumber, const char pStaffMemberUsername[], const char pStaffMemberPassword[], Report *preport[], int receptionist1, int receptionist2);
	void loginToSystem(const char ppStaffMemberUsername[], const char ppStaffMemberPassword[] );
	void updateSystem();
	~Staff();
};
