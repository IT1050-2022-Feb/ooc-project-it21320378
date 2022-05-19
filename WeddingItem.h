WeddingItem.h
#include “vendor.h"
#include “staff.h"

Class  weddingItem 
{
protected :
 Int   weddingItemID;
 Char  weddingItemName;
 Char  weddingItemDescription 
 Char  weddingItemType 
 Double   weddingItemPrice

public     : 
 weddingItem();
 weddingItem( int cweddingItemID[],const 
 charcweddingItemName[],const char 
 cweddingitemDescription[],const char cweddingItemType[],double 
 cweddingItemPrice[]);
 Void  genarateID();
 Void additem ();
 Void updateitem();
 Void delete item();
 Void display item price();
 ~ weddingItem();
};

