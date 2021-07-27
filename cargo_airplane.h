#ifndef CARGO_AIRPLANE_H
#define CARGO_AIRPLANE_H
#include <string>
#include <vector>
#include "airplane.h"

class cargo_airplane : public airplane
{
  public :
  cargo_airplane() ;
  virtual void show(int )  ;
  virtual void set_airplane_capacity(int) ;
  virtual int get_airplane_capacity() ;

  protected :

  private :
  int capacity ;


};
#endif
