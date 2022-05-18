#include "Staff.h"
#include "Receptionist.h"
#include <cstring>

Staff::Staff()
{
	StaffMemberID = 00;
	strcpy(StaffMemberName, "");
	strcpy(StaffMemberEmail, "");
	StaffMemberPNumber = 0000000000;
	strcpy(StaffMemberUsername, "");
	strcpy(StaffMemberPassword, "");
	for(int i=0; i<SIZE; i++)
	{
		report[i] = preport[i];
	}
}

Staff::Staff(int pStaffMemberID, const char pStaffMemberName[], const char pStaffMemberEmail[], int pStaffMemberPNumber, const char pStaffMemberUsername[], const char pStaffMemberPassword[], Report *preport[], int receptionist1, int receptionist2)
{
	StaffMemberID = pStaffMemberID;
	strcpy(StaffMemberName, pStaffMemberName);
	strcpy(StaffMemberEmail, pStaffMemberEmail);
	StaffMemberPNumber = pStaffMemberPNumber;
	strcpy(StaffMemberUsername, pStaffMemberUsername);
	strcpy(StaffMemberPassword, pStaffMemberPassword);
	for(int i=0; i<SIZE; i++)
	{
		report[i] = preport[i];
	}
}

void Staff::loginToSystem(const char ppStaffMemberUsername[], const char ppStaffMemberPassword[] )
{

}

void Staff::updateSystem()
{

}

Staff::~Staff()
{	
	for(int i=0; i<SIZE; i++)
	{
		delete report[i];
		delete receptionist[i];
	}
}