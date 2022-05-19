
#include WeddingItem.h”
#include <cstring>
#include <iostream>
using namespace std;

WeddingItem :: WeddingItem()
{
	guestID = 0;
	strcpy_s(weddingitemID, "");
	strcpy_s( weddingitemName, "");
	strcpy_s( weddingitemDescription,"");
	strcpy_s( weddingitemType, "");
}

WeddingItem : : WeddingItem(int cweddingItemID[],const char cweddingItemName[],const char cweddingItemDescription[],const char cweddingItemType[],double cweddingItemPrice[]);
{
	guestID = cguestID;
	strcpy_s( guestName, cguestName);
	strcpy_s( guestEmail, cguestEmail);
	strcpy_s( guestContactNum, cguestContactNum);
	strcpy_s( guestAddress, cguestAddress);
}

void WeddingItem :: genarateID()
{
}
 void WeddingItem :: additem()
{
}
void WeddingItem :: upadteitem()
{
}
void WeddingItem :: deleteitem()
{
}
void WeddingItem :: displayitemPrice()
{
}
Weddingitem :: ~ Weddingitem ()
{
	//Destructor
}   