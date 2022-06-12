#include "catch.h"

// default constructor and destructor
Catch:: Catch(){
  log_time = 0;
  log_location = "default";
  log_weight = 00.00;
}
Catch:: ~Catch(){ }

// class initalization
Catch:: Catch(int catch_time, string catch_location, float catch_weight){
  this->log_time = catch_time;
  this->log_location = catch_location;
  this->log_weight = catch_weight;
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

float Catch:: get_weight(){ return log_weight; }
void Catch:: set_weight(float catch_weight){
  this->log_weight = catch_weight;
  return;
}
