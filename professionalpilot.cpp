#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include "pilot.h"
#include "professionalpilot.h"

using namespace std ;


professionalpilot::professionalpilot()
{

}


void professionalpilot::show(int u)
{
  cout << u + 1 <<"_"<<"the pilot_name :"<< left << setw(20) << pilot_ptr[u]->get_pilot_name() <<"pilot_id :" << left << setw(20) << pilot_ptr[u]->get_pilot_id() ;
  cout <<"pilot_age :"<< left << setw(10) << pilot_ptr[u]->get_pilot_age() <<"pilot_grade :"<< pilot_ptr[u]->get_professionalpilot_grade() << endl ;
}


void professionalpilot::set_professionalpilot_garde(int professionalpilot_grade)
{
  if(professionalpilot_grade != 1 && professionalpilot_grade != 2)
  {
    throw out_of_range("the professionalpilot_grade should be 1 or 2 !") ;
  }
  else
  {
    this->professionalpilot_grade = professionalpilot_grade ;
  }
}


int professionalpilot::get_professionalpilot_grade()
{
  return professionalpilot_grade ;
}
