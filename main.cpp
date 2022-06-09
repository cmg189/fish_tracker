#include "catch.h"

int display_menu();

int main(){
  cout << "\nFish Tracker\n\n";
  
  int choice;
  do{
     choice = display_menu();
    switch(choice){
      case 1:
        cout << "log\n";
        break;
      case 2:
        cout << "output\n";
        break;
      case 0:
        cout << "exit\n";
        break;
      default:
        cout << "invalid option\n\n";
        break;
    }

  }while(choice != 0);


  cout << "\nProgram ended\n\n";
  return 0;
}

int display_menu(){
  int choice;
  cout << "Choose a menu option:\n\n";
  cout << "1: Log new catch\n";
  cout << "2: Output all catches\n";
  cout << "0: End program\n\n";
  cout << ">";
  cin >> choice;

  return choice;
}
