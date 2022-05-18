#include "Hotel.h"
#include "WeddingItem.h"

class Guest
{
protected:
  int guestID;
  char guestName[20];
  char guestEmail[30];
  char guestContactNum[10];
  char guestAddress[30];

public:
  Guest();
  Guest(int cguestID, const char cguestName[], const char cguestEmail[], const char cguestContactNum[], const char cguestAddress[]);
  void searchHotels(Hotel* cHtl);
  void searchWeddingItems(WeddingItem* cWI);
  void registerUser();
  void displayDetails();
  ~Guest();
};