inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 31, 20, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "east" : DIR+"/rooms/32_20_-7.c",
  "north" : DIR+"/rooms/31_19_-7.c"
  ]) );

}

