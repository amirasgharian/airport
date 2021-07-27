#include <iostream>
#include <string>
#include <vector>
#include <new>
#include <stdexcept>
#include <typeinfo>
#include <iterator>
#include <algorithm>
#include "pilot.h"
#include "professionalpilot.h"
#include "beginnerpilot.h"


using namespace std ;
int pilot::pilot_count = 0 ;
vector <pilot*> pilot::pilot_ptr = {} ;
pilot::pilot()
{

}


pilot * pilot::add(int pilot_type)
{
  string pilot_name , pilot_id ;
  int pilot_age ;
  if(pilot_count < 10 && pilot_type == 1)
  {
    int professionalpilot_grade ;
    pilot_ptr.push_back(new professionalpilot()) ;
    try
    {
      cout <<"please enter the pilot_name :"<< endl ;
      cin >> pilot_name ;
      pilot_ptr[pilot_count]->set_pilot_name(pilot_name);
      cout <<"please enter the pilot_id :"<< endl ;
      cin >> pilot_id ;
      pilot_ptr[pilot_count]->set_pilot_id(pilot_id) ;
      cout <<"please enter the pilot_age :"<< endl ;
      cin >> pilot_age ;
      pilot_ptr[pilot_count]->set_pilot_age(pilot_age) ;
      cout <<"please enter the pilot_grade :" << endl ;
      cin >> professionalpilot_grade ;
      pilot_ptr[pilot_count]->set_professionalpilot_garde(professionalpilot_grade) ;
      pilot_count++ ;
      return pilot_ptr[pilot_count - 1] ;
    }
    catch(out_of_range &s)
    {
      cout << s.what() << endl ;
      pilot_ptr.pop_back() ;
    }

  }
  else if(pilot_count < 10 && pilot_type == 2)
  {
    int nflights ;
    pilot_ptr.push_back(new beginnerpilot()) ;
    try
    {
      cout <<"please enter the pilot_name :"<< endl ;
      cin >> pilot_name ;
      //getline(cin , pilot_name) ;
      pilot_ptr[pilot_count]->set_pilot_name(pilot_name) ;
      cout <<"please enter the pilot_id :"<< endl ;
      cin >> pilot_id ;
      pilot_ptr[pilot_count]->set_pilot_id(pilot_id) ;
      cout <<"please enter the pilot_age :"<< endl ;
      cin >> pilot_age ;
      pilot_ptr[pilot_count]->set_pilot_age(pilot_age) ;
      cout <<"please enter the number of flights of pilot :"<< endl ;
      cin >> nflights ;
      pilot_ptr[pilot_count]->set_beginnerpilot_nflights(nflights) ;
      pilot_count++ ;
      return pilot_ptr[pilot_count - 1] ;
    }
    catch(out_of_range &s)
    {
      cout << s.what() << endl ;
      pilot_ptr.pop_back() ;
    }
  }
  else
  {
    cout <<"The number of planes has reached its maximum. You can no longer add new planes" << endl ;
  }
}


void pilot::remove()
{
  string pilot_id1 ;
  bool testremove = 0 ;
  cout <<"please enter the pilot_id you want to remove !"<< endl ;
  cin >> pilot_id1 ;
  for(int i = 0 ; i < pilot_count ; i++)
  {
    if(pilot_ptr[i]->pilot_id == pilot_id1)
    {
      pilot_ptr.erase(pilot_ptr.begin() + i) ;
      pilot_count-- ;
      testremove = 1 ;
    }
  }
  if(testremove == 0)
  {
    throw invalid_argument("there is no pilot_id like this to remove !") ;
  }
}



void pilot::show(int u)
{

}




void pilot::set_pilot_name(string pilot_name)
{
  if(pilot_name.size() > 20)
  {
    throw out_of_range("too long characters ! The size of string must be less than 20 !") ;
  }
  else
  {
    this->pilot_name = pilot_name ;
  }
}

string pilot::get_pilot_name()
{
  return pilot_name ;
}


void pilot::set_pilot_id(string pilot_id)
{
  if(pilot_id.size() > 20)
  {
    throw out_of_range("too long characters ! The size of string must be less than 20 !") ;
  }
  else
  {
    this->pilot_id = pilot_id ;
  }
}


string pilot::get_pilot_id()
{
  return pilot_id ;
}

void pilot::set_pilot_age(int pilot_age)
{
  if(pilot_age < 25 && pilot_age > 80)
  {
    throw out_of_range("The age of the pilot should be between 25 and 80 !") ;
  }
  else
  {
    this->pilot_age = pilot_age ;
  }
}


int pilot::get_pilot_age()
{
  return pilot_age ;
}


void pilot::set_professionalpilot_garde(int professionalpilot_grade)
{

}


int pilot::get_professionalpilot_grade()
{

}


void pilot::set_beginnerpilot_nflights(int nflights)
{

}

int pilot::get_beginnerpilot_nflights()
{

}
