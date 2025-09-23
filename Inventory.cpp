#include <iostream>
using namespace std;

struct item
{
  string type;
  string name;
  int number;
};




int main() 
{
   item item1;
  item1.name = " kniv \n";
  item1.type = " (bestick) \n";
  item1.number = 2;

  item item2;
  item2.name = " gaffel \n" ;
  item2.type = " (bestick) \n";
  item2.number = 1;

  item item3;
  item3.name = " potatis \n";
  item3.type = " (mat) \n";
  item3.number =3;

  int itemNumber;



  int length = 10;
  int* arr2 = new int[9]{};
  delete[] arr2;


  arr2[4]= 1;
  arr2[3]= 2;
  arr2[1]= 3;


  for(int i = 0;i< length;i++)
  {

    itemNumber=i;
     switch(itemNumber)
    {
      case 1:
      cout<< item2.name<< + " \n";
      cout<< item2.type<< + " \n";
      break;
      case 2:
      cout<< item1.name<< + " \n";
      cout<< item1.type<< + " \n";
      break;
      case 3:
      cout<< item3.name<< + " \n";
      cout<< item3.type<< + " \n";
      break;
    }

  }

 

  

  

  return 0;
}