#include <iostream>
//#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include "pilot.h"
#include "beginnerpilot.h"


using namespace std ;

beginnerpilot::beginnerpilot()
{

}

void beginnerpilot::show(int u )
{
  cout << u + 1 <<"_"<<"the pilot_name :"<< left << setw(20) << pilot_ptr[u]->get_pilot_name() <<"pilot_id :"<< left << setw(20) << pilot_ptr[u]->get_pilot_id() ;
  cout <<"pilot_age :"<< left << setw(10) << pilot_ptr[u]->get_pilot_age() <<"the number of flights :"<< pilot_ptr[u]->get_beginnerpilot_nflights() << endl ;

}



void beginnerpilot::set_beginnerpilot_nflights(int nflights)
{
  if(nflights < 0 )
  {
    throw out_of_range("the number of flights of pilot should be more than 0 !") ;
  }
  else
  {
    this->nflights = nflights ;
  }
}

int beginnerpilot::get_beginnerpilot_nflights()
{
  return nflights ;
}
