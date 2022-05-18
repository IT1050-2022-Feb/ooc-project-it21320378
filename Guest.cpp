#include "Guest.h"
#include <cstring>
#include <iostream>

using namespace std;

Guest::Guest()
{
guestID = 0;
strcpy(guestName, "");
strcpy(guestEmail, "");
strcpy(guestContactNum, "0000000000");
strcpy(guestAddress, "");
}

Guest::Guest(int cguestID, const char cguestName[], const char cguestEmail[], const char cguestContactNum[], const char cguestAddress[]);
{
guestID = cguestID;
strcpy_s(guestName, cguestName);
strcpy_s(guestEmail, cguestEmail);
strcpy_s(guestContactNum, cguestContactNum);
strcpy_s(guestAddress, cguestAddress);
}

void Guest::searchHotels(Hotel* cHtl)
{
  
}

void Guest::searchWeddingItems(WeddingItem* cWI)
{
  
}

void Guest::registerUser()
{
  
}

void Guest::displayDetails()
{
  
}

Guest::~Guest()
{
  //Destructor
}