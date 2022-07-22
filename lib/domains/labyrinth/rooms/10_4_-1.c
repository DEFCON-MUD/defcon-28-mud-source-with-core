inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 10, 4, -1 }));
  set_dimensions(({ 10, 10 }));

  set_short( "Labyrinth" );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "northwest" : DIR+"/rooms/9_3_-1.c",
  "southwest" : DIR+"/rooms/9_5_-1.c",
  "south" : DIR+"/rooms/10_5_-1.c"
  ]) );

}

