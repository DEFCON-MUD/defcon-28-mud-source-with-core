inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 23, 12, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^" );

  set_objects(
    DIR+"/npc/dba.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/22_12_-9.c",
  "north" : DIR+"/rooms/23_11_-9.c"
  ]) );

}

