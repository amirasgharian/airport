#ifndef BEGINNERPILOT_H
#define BEGINNERPILOT_H
#include <iostream>
#include "pilot.h"

class beginnerpilot : public pilot
{
  public :
    beginnerpilot() ;
    void show(int ) ;
    virtual void set_beginnerpilot_nflights(int ) ;
    virtual int get_beginnerpilot_nflights() ;

  protected :


  private :
    int nflights ;

};
#endif
