#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Catch{
  private:
    int log_time;
    string log_location;
    float log_weight;

  public:
    Catch(); ~Catch();
    Catch(int catch_time, string catch_location, float catch_weight);


    int get_time();
    void set_time(int catch_time);

    string get_location();
    void set_location(string catch_location);

    float get_weight();
    void set_weight(float catch_weight);

};
