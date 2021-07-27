#ifndef PASSENGER_AIRPLANE_H
#define PASSENGER_AIRPLANE_H
#include <string>
#include <vector>
#include "airplane.h"

class passenger_airplane : public airplane
{
  public :
  passenger_airplane() ;
  virtual void show(int )  ;
  virtual void set_airplane_capacity(int) ;
  virtual int get_airplane_capacity() ;

  protected :

  private :
  int capacity ;


};
#endif
