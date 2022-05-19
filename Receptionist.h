Receptionist.h              
#include “hotel.h"
#include “weddiingitem.h"
#Define SIZE [2]
Class Receptionist 
{
private  :
 Char receptionistusername[10];
 Char receptionistpassword [10];

 hotel* hotel [Size ];
 weddingitem  * weddingitem [Size];
public   :
 Receptionist();
 Receptionist (const char creceptinistusarname[],const char 
 creceptinistpassword[],int hotel1,int hotel2, int witem1, int 
 witem2)
 Void  login();
 Void  bookweddingItem(weddingitem1*cwitem1);
 Void chose  hotels(hotels*hotel1);
  ~ Receptionist();
};