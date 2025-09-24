#include <iostream>

using namespace std;

struct item
{
  // Blueprint for item
  string type;
  string name;

};

void viewList(item i)
{
  // Printing out information about item
  cout << i.name << " " << i.type << " ";
};
void menuText()
{
   // Menu text
  cout << "Welcome" << endl;
  cout << "press 1 to view inventory" << endl;
  cout << "press 2 to add item"<< endl;
  cout << "press 3 to delete item"<< endl;
  cout << "press 4 to exit menu"<< endl;

};


int main() 
{
  menuText();
  bool menu = true;
  int menuOptions;
  int listNr;
  int count;
  
  cin >> listNr;
  
  int length = 10;
  
  int* inventoryList = new int[9]{1,2,3,1,2,3,1,2,3};
  menuOptions = listNr;
  
  // item 1
  item item1;
  item1.name = " sword ";
  item1.type = " (weapon) \n";
  
  // item 2
  item item2;
  item2.name = " axe " ;
  item2.type = " (weapon) \n";
  
  // item 3
  item item3;
  item3.name = " potato ";
  item3.type = " (food) \n";
  
  do{
    switch(menuOptions)
    {
      case 1:
      // View inventory
      for(int i = 0; i < length;i++)
      {
        
        if(inventoryList[i]==1)
        {
          cout<< i << ". " << &inventoryList[i];
          viewList(item1);         
        }
        if(inventoryList[i]==2)
        {
          cout<< i << ". " << &inventoryList[i];
          viewList(item2);         
        }
        if(inventoryList[i]==3)
        {
          cout<< i << ". " << &inventoryList[i];
          viewList(item3);         
        }  
        count ++;
      }
      
      break;
      case 2:
      // Add item
      
      break;
      case 3:
      // Delete item
      
      break;
      case 4:
      // stop menu
      menuOptions = false;
      break;
    }
  } while(menuOptions !=4 && count < length);    
  
  delete[] inventoryList;
  return 0;
}