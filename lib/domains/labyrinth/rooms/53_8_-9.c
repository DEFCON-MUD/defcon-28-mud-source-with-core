inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 53, 8, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/Gl0Rz0.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/52_8_-9.c",
  "south" : DIR+"/rooms/53_9_-9.c",
  "east" : DIR+"/rooms/54_8_-9.c",
  "north" : DIR+"/rooms/53_7_-9.c"
  ]) );

}

