#include <iostream>
#include <vector>
#include <typeinfo>
//#include <stdexpect>
#include <algorithm>
#include "airplane.h"
#include "passenger_airplane.h"
#include "cargo_airplane.h"
#include "pilot.h"
#include "professionalpilot.h"
#include "beginnerpilot.h"
#include "flight.h"


using namespace std ;

void help()
{
  cout <<"Enter the desired command by selecting any of the following keys :"<< endl ;
  cout <<"1 :add airplane"<< endl ;
  cout <<"2 :add pilot"<< endl ;
  cout <<"3 :add flight"<< endl ;
  cout <<"4 :remove airplane"<< endl ;
  cout <<"5 :remove pilot"<< endl ;
  cout <<"6 :remove flight"<< endl ;
  cout <<"7 :show all airplanes"<< endl ;
  cout <<"8 :show all pilots"<< endl ;
  cout <<"9 :show all flights"<< endl ;
  cout <<"10 :exit program"<< endl ;
}

int main()
{
    vector <airplane *> s(20) ;
    vector <pilot *> pilotmain_ptr(10) ;
    vector <flight *> flightmain_ptr(8) ;
    int key , i = 0 , p = 0 , f = 0 ;
    cout <<"welcome to the program :Airport management"<< endl ;
    cout <<"you can Press 0 to get tips :"<< endl ;
    while(1)
    {
      cout <<"choose your key :" << endl ;
      cin >> key ;
      switch (key)
      {
        case 0 :
        help() ;
        break ;
        case 1 :
        cout <<"press 1 to Add a passenger plane or press 2 to Add a cargo plane :"<< endl ;
        int airplane_type ;
        cin >> airplane_type ;
        if(airplane_type == 1)
        {
          s[i] = s[i]->add(airplane_type) ;
          i++ ;
        }
        else if(airplane_type == 2)
        {
          s[i] = s[i]->add(airplane_type) ;
          i++ ;
        }
        break ;
        case 2 :
        cout <<"press 1 to add a professional pilot or press 2 to add a beginner pilot : "<< endl ;
        int pilot_type ;
        cin >> pilot_type ;
        if(pilot_type == 1)
        {
          pilotmain_ptr[p] = pilotmain_ptr[p]->add(pilot_type) ;
          p++ ;
        }
        else if (pilot_type == 2)
        {
          pilotmain_ptr[p] = pilotmain_ptr[p]->add(pilot_type) ;
          p++ ;
        }
        break ;
        case 3 :
        flightmain_ptr[f] = flightmain_ptr[f]->add() ;
        f++ ;
        break ;
        case 4:
        try
        {
          s[0]->remove() ;
          i-- ;
        }
        catch(invalid_argument &s)
        {
          cout << s.what() << endl ;
        }
        break ;
        case 5 :
        try
        {
          pilotmain_ptr[0]->remove() ;
          p-- ;
        }
        catch(invalid_argument &s)
        {
          cout << s.what() << endl ;
        }
        break ;
        case 6 :
        try
        {
          flightmain_ptr[0]->remove() ;
          f-- ;
        }
        catch(invalid_argument &s)
        {
          cout << s.what() << endl ;
        }
        break ;
        case 7 :
        for(int u = 0 ; u < i ; u++)
        {
          s[u]->show(u) ;
        }
        break ;
        case 8 :
        for(int u = 0 ; u < p ;u++)
        {
          pilotmain_ptr[u]->show(u) ;
        }
        break ;
        case 9 :
        for(int u = 0 ; u < f ;u++)
        {
          flightmain_ptr[u]->show(u) ;
        }
        break ;
      }
      if(key == 10 )
      {
        break ;
      }
    }
    cout <<"end of program !"<< endl ;

  return 0 ;
}
