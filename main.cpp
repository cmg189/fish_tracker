#include "catch.h"
// push from windows 
int display_menu();
void log_fish();

int main(){
  cout << "\n\t\t\tFish Tracker\n\n";

  int choice;
  do{
     choice = display_menu();
     switch(choice){
      case 1: log_fish(); break;
      case 2: cout << "output\n"; break;
      case 0: cout << "exit\n"; break;
      default: cout << "invalid option\n\n"; break;
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

void log_fish(){

  float catch_weight;
  int catch_time;
  string catch_location;    // get object info from user

  cout << "\nEnter time of catch\n>";
  cin >> catch_time;
  cout << "Enter catch location\n>";
  cin >> catch_location;
  cout << "Enter weight in grams\n>";
  cin >> catch_weight;

  Catch fish(catch_time, catch_location, catch_weight);  // initalize object

  cout << "\nTime: " << fish.get_time() << "\nPlace: " << fish.get_location() << "\nWeight: " << fish.get_weight() << "\n\n";


  return;

}
