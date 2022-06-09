#include "catch.h"


int main(){
  Catch fish;
  cout << "\nFish Tracker\n\nEnter catch information\n\n";

  int user_time;
  cout << "Time: ";
  cin >> user_time;

  string user_location;
  cout << "Location: ";
  cin >> user_location;

  fish.set_time(user_time);
  fish.set_location(user_location);

  cout << "\nFish was caught at " << fish.get_time() << " in " << fish.get_location() << endl;


  cout << "\nProgram ended\n\n";
  return 0;
}
