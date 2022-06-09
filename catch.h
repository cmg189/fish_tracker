#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Catch{
  private:
    int log_time;
    string log_location;

  public:
    Catch(); ~Catch();
    Catch(int catch_time, string catch_location);


    int get_time();
    void set_time(int catch_time);

    string get_location();
    void set_location(string catch_location);
};
