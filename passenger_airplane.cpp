#include <iostream>
#include <vector>
#include <typeinfo>
#include <iomanip>
//#include <stdexcept>
#include "passenger_airplane.h"
#include "airplane.h"

using namespace std ;

passenger_airplane::passenger_airplane()
{

}



void passenger_airplane::set_airplane_capacity(int capacity)
{
  this->capacity = capacity ;
}

int passenger_airplane::get_airplane_capacity()
{
  return capacity ;
}

void passenger_airplane::show(int u)
{
  cout <<u+1<<"_"<<"the plane_id :"<< left << setw(20) << airplane_ptr[u]->get_airplane_id() <<"the capacity of airplane :"<< airplane_ptr[u]->get_airplane_capacity() <<" persons"<< endl ;
}
