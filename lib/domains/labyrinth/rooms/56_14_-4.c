inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 56, 14, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/auditor.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/55_14_-4.c",
  "east" : DIR+"/rooms/57_14_-4.c"
  ]) );

}

