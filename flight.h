#ifndef FLIGHT_H
#define FLIGHT_H
#include <vector>

class flight
{
  public :
  flight() ;
  static std::vector <flight *> flight_ptr ;
  static int flight_count ;
  flight* add() ;
  void remove() ;
  void show(int ) ;
  void set_origin(std:: string) ;
  std::string get_origin() ;
  void set_aim(std::string) ;
  std::string get_aim() ;
  void set_pilot_id(std::string) ;
  void set_airplane_id(std::string) ;
  void set_flight_id(int ) ;
  int get_flight_id() ;


  protected :


  private :
  int flight_id ;
  std::string origin ;
  std::string aim ;
  std::string fpilot_id ;
  std::string fairplane_id ;


};
#endif
