#include "Couple.h"
#include<cstring>
#include <iostream>

using namespace std;

Couple::Couple()
{
  strcpy(custUsername, "");
  strcpy(custPassword, "");
}

Couple::Couple(const char ccustUsername[], const char ccustPassword[], int cguestID, const char cguestName[], const char cguestEmail[], const char cguestContactNum[], const char cguestAddress[]) : Guest(cguestID, cguestName, cguestEmail, cguestContactNum, cguestAddress)
{
  strcpy(custUsername, ccustUsername);
  strcpy(custPassword, ccustPassword);
}

void Couple::login()
{
  
}

void Couple::filterOutSystem()
{
  
}

void Couple::reserveReceptionist()
{
  
}

char Couple::giveFeedback()
{
  
}

double Couple::makePayment()
{
  
}

void Couple::logout()
{
  
}

Couple::~Couple()
{
  //Destructor
}