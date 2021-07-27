#ifndef PILOT_H
#define PILOT_H
#include <string>

class pilot
{
  friend class flight ;

  public:
    pilot() ;
    pilot * add(int ) ;
    void remove() ;
    virtual void show(int ) ;
    void set_pilot_name(std::string) ;
    std::string get_pilot_name() ;
    void set_pilot_id(std::string) ;
    std::string get_pilot_id() ;
    void set_pilot_age(int ) ;
    int get_pilot_age() ;
    static int pilot_count ;
    static std::vector <pilot*> pilot_ptr ;
    virtual int get_professionalpilot_grade() ;
    virtual void set_professionalpilot_garde(int ) ;
    virtual void set_beginnerpilot_nflights(int ) ;
    virtual int get_beginnerpilot_nflights() ;

  protected:


    std::string pilot_name ;
    std::string pilot_id ;
    int pilot_age ;


  private:

};


#endif
