#include <string>
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <iterator>
#include "flight.h"
#include "airplane.h"
#include "pilot.h"


using namespace std ;

flight::flight()
{

}


vector <flight *> flight::flight_ptr = {} ;
int flight::flight_count = 0 ;


flight* flight::add()
{
  string origin , aim , pilot_id , airplane_id ;
  int flight_id ;
  flight_ptr.push_back(new flight()) ;
  if(flight_count < 8)
  {
    try
    {
      cout <<"please neter the flight_id :" << endl ;
      cin >> flight_id ;
      //  cout << flight_id << endl ;
      flight_ptr[flight_count]->set_flight_id(flight_id) ;
      cout <<"please enter the origin :" << endl ;
      cin >> origin ;
      flight_ptr[flight_count]->set_origin(origin) ;
      cout <<"please enter the aim :" << endl ;
      cin >> aim ;
      flight_ptr[flight_count]->set_aim(aim) ;
      cout <<"please enter the pilot_id :"<< endl ;
      cin >> pilot_id ;
      flight_ptr[flight_count]->set_pilot_id(pilot_id) ;
      cout <<"please enter the airplane_id :" << endl ;
      cin >> airplane_id ;
      flight_ptr[flight_count]->set_airplane_id(airplane_id) ;
      flight_count++ ;
      return flight_ptr[flight_count - 1] ;
    }
    catch(out_of_range &s)
    {
      cout << s.what() << endl ;
      flight_ptr.pop_back() ;
    }
    catch(invalid_argument &s)
    {
      cout << s.what() << endl ;
      flight_ptr.pop_back() ;
    }
  }
  else
  {
    cout <<"opps"<< endl ;
  }
}

void flight::remove()
{
  int rflight_id ;
  bool testremove = 0 ;
  cout <<"please enter the flight_id you want to remove :"<< endl ;
  cin >> rflight_id ; //flight_id that we want to remove ;
  for(int i = 0 ; i < flight_count ; i++)
  {
    if(flight_ptr[i]->flight_id == rflight_id)
    {
      flight_ptr.erase(flight_ptr.begin() + i) ;
      flight_count-- ;
      testremove = 1 ;
    }
  }
  if(testremove == 0)
  {
    throw invalid_argument("there is no flight_id like this to remove !") ;
  }
}


void flight::set_origin(string origin)
{
  if(origin.size() > 20 )
  {
    throw out_of_range("too long characters ! The size of string must be less than 20 !") ;
  }
  else
  {
    this->origin = origin ;
  }
}


string flight::get_origin()
{
  return origin ;
}


void flight::set_aim(string aim)
{
  if(aim.size() > 20 )
  {
    throw out_of_range("too long characters ! The size of string must be less than 20 !") ;
  }
  else
  {
    this->aim = aim ;
  }
}


string flight::get_aim()
{
  return aim ;
}


void flight::set_pilot_id(string pilot_id)
{
  //cout <<"test  1" << endl ;
  if(pilot_id.size() > 20)
  {
    throw out_of_range("too long characters ! the size of string must be less than 20 !") ;
  }
  for(int i = 0 ; i < pilot::pilot_count ;i++)
  {
  //  cout << "test 2" << endl ;
    if(pilot::pilot_ptr[i]->pilot_id == pilot_id)
    {
      fpilot_id = pilot_id ;
      return ;
    }
//    cout << "test 3 " << endl ;
  }
  throw invalid_argument("There is no pilot with this id !") ;
}



void flight::set_airplane_id(string airplane_id)
{
  if(airplane_id.size() > 20)
  {
    throw out_of_range("too long characters ! the size of string must be less than 20 !") ;
  }
  for(int i = 0 ; i < airplane::airplane_count ; i++)
  {
    if(airplane::airplane_ptr[i]->airplane_id == airplane_id)
    {
      fairplane_id = airplane_id ;
      return ;
    }
  }
  throw invalid_argument("There is no airplane with this id !") ;
}



void flight::set_flight_id(int flight_id )
{
  if(flight_id < 100 && flight_id > 1000)
  {
    throw out_of_range("the flight_id should be beetwin 100 to 1000 !") ;
  }
  else
  {
    this->flight_id = flight_id ;
  }
}


int flight::get_flight_id()
{
  return flight_id ;
}

void flight::show(int u )
{
  cout << u + 1 <<"_"<<"flight_id :"<< left << setw(8) << flight_id <<"flight's origin :"<< left << setw(20)<< origin <<"flight's aim :"<< left << setw(20) << aim ;
  cout <<"flight's pilot_id :"<< left << setw(20) << fpilot_id <<"flight's airplane_id :"<< left << setw(20) << fairplane_id << endl ;
}
