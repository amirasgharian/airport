#include <iostream>
#include <vector>
#include <new>
#include <stdexcept>
#include <typeinfo>
#include <iterator>
#include <algorithm>
#include "airplane.h"
#include "passenger_airplane.h"
#include "cargo_airplane.h"


using namespace std ;

int airplane::airplane_count = 0 ;
vector <airplane *> airplane::airplane_ptr = {} ;

airplane::airplane()
{

}


void airplane::set_airplane_id(string airplane_id)
{
  if(airplane_id.size() > 20)
  {
    throw out_of_range("too long characters ! The size of string must be less than 20 !") ;
  }
  else
  {
    this->airplane_id = airplane_id ;
  }
}


string airplane::get_airplane_id()
{
  return airplane_id ;
}


airplane * airplane::add(int airplane_type)
{
  if(airplane_count < 20 && airplane_type == 1)
  {

    int capacity ;
    airplane_ptr.push_back(new passenger_airplane()) ;
    airplane_ptr[airplane_count] = airplane_ptr.back() ;
    cout <<"please enter the plane_id :"<< endl ;

    cin >> airplane_ptr[airplane_count]->airplane_id ;

    try
    {
      airplane_ptr[airplane_count]->set_airplane_id(airplane_ptr[airplane_count]->airplane_id) ;
      cout <<"please enter the capacity of plane(persons) :"<< endl ;
      cin >> capacity ;
      airplane_ptr[airplane_count]->set_airplane_capacity(capacity) ;
      airplane_count++ ;
      return airplane_ptr[airplane_count - 1] ;
    }
    catch(out_of_range &s)
    {
      cout << s.what() << endl ;
      airplane_ptr.pop_back();
    }
  }
  if(airplane_count < 20 && airplane_type == 2)
  {
    int capacity ;
    airplane_ptr.push_back(new cargo_airplane()) ;
    airplane_ptr[airplane_count] = airplane_ptr.back() ;

    try
    {
      cout <<"please enter the plane_id :"<< endl ;
      cin >> airplane_ptr[airplane_count]->airplane_id ;
      airplane_ptr[airplane_count]->set_airplane_id(airplane_ptr[airplane_count]->airplane_id) ;
      cout <<"please enter the capacity of plane(KG) :"<< endl ;
      cin >> capacity ;
      airplane_ptr[airplane_count]->set_airplane_capacity(capacity) ;
      airplane_count++ ;
      return airplane_ptr[airplane_count - 1] ;
    }
    catch(out_of_range &s)
    {
      cout << s.what() << endl ;
      airplane_ptr.pop_back();
    }
  }
    else
    {
      cout <<"The number of planes has reached its maximum. You can no longer add new planes" << endl ;
    }
}


void airplane::remove()
{
  string airplane_id1 ;
  bool testremove = 0 ;
  cout <<"enter the airplane_id that you want to remove :"<< endl ;
  cin >> airplane_id1 ;
  for(int u = 0 ; u < airplane_count ; u++)
  {
    if(airplane_ptr[u]->airplane_id == airplane_id1 )
    {
      airplane_ptr.erase(airplane_ptr.begin() + u) ;
      airplane_count-- ;
      testremove = 1 ;
    }
  }
  if(testremove == 0)
  {
    throw invalid_argument("there is no airplane_id like this to remove !**") ;
  }
}



void airplane::show(int u )
{

}

void airplane::set_airplane_capacity(int capacity)
{

}

int airplane::get_airplane_capacity()
{

}
