#include "Guest.h"
#include "Receptionist.h"
#include "Booking.h"
#include "Payment.h"

class Couple :public Guest
{
protected:
  char custUsername[10];
  char custPassword[10];

public:
  Couple();
  Couple(const char ccustUsername[], const char ccustPassword[], int cguestID, const char cguestName[], const char cguestEmail[], const char cguestContactNum[], const char cguestAddress[]);
  void login();
  void filterOutSystem();
  void reserveReceptionist();
  char giveFeedback();
  double makePayment();
  void logout();
  ~Couple();
};