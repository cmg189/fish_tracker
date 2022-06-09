#include "catch.h"

// default constructor and destructor
Catch:: Catch(){
  log_time = 0;
  log_location = "default";
}
Catch:: ~Catch(){ }

// class initalization
Catch:: Catch(int catch_time, string catch_location){
  this->log_time = catch_time;
  this->log_location = catch_location;
}

// time set and get
int Catch:: get_time(){ return log_time; }
void Catch:: set_time(int catch_time){
  this->log_time = catch_time;
  return;
}

// location set and get
string Catch:: get_location(){ return log_location; }
void Catch:: set_location(string catch_location){
  this->log_location = catch_location;
  return;
}
