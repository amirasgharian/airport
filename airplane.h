#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
#include <vector>
#include <iostream>


class airplane
{
  friend class flight ;
  public:
  airplane() ;
  virtual void show(int ) ;
  airplane * add(int ) ;
  void remove() ;
  void set_airplane_id(std::string) ;
  std::string get_airplane_id() ;
  static std::vector <airplane *> airplane_ptr ;
  static int airplane_count ;
  virtual void set_airplane_capacity(int) ;
  virtual int get_airplane_capacity() ;
  protected:
    std::string airplane_id ;



  private:



};
#endif
