#include “Receptionist.h”
#include<cstring>
Using namespace std;

Couple :: Couple()
{
	strcpy_s(receptinistUsername, “ ”);
	strcpy_s(receptionistPassword, “ ”);
}
receptionist : : receptionist(const char creceptinistusarname[],const char creceptinistpassword[],int hotel1,int hotel2, int witem1, int witem2)
{
	strcpy_s(receptinistUsername, creceptinistUsername );
	strcpy_s(receptionistPassword, creceptionistPassword);
}

void Receptionist :: login ()
{
}
void Receptionist :: bookweddingItem(WeddingItem1*cwitem1)
{
}  
void Receptionist :: chosehotels(hotels*hotel1);
{
}
Receptionist :: ~ Receptionist ()
{
	//Destructor
}  
