#ifndef PROFESSIONALPILOT_H
#define PROFESSIONALPILOT_H
#include <iostream>
#include "pilot.h"


class professionalpilot : public pilot
{
  public :
  professionalpilot() ;
  virtual void show(int ) ;
  virtual void set_professionalpilot_garde(int ) ;
  virtual int get_professionalpilot_grade() ;


  protected :


  private :
  int professionalpilot_grade ;

};
#endif
