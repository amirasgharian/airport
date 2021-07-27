#include <iostream>
#include <vector>
#include <iomanip>
//#include <stdexcept>
#include "airplane.h"
#include "cargo_airplane.h"

using namespace std ;

cargo_airplane::cargo_airplane()
{

}



void cargo_airplane::set_airplane_capacity(int capacity)
{

  this->capacity = capacity ;
}

int cargo_airplane::get_airplane_capacity()
{
  return capacity ;
}

void cargo_airplane::show(int u)
{
    cout <<u+1<<"_"<<"the plane_id :"<< left << setw(20) <<airplane_ptr[u]->get_airplane_id() <<"the capacity of airplane :"<< airplane_ptr[u]->get_airplane_capacity() <<" KG"<< endl ;
    return ;
}
