inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 21, 31, -2 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/21_32_-2.c",
  "north" : DIR+"/rooms/21_30_-2.c"
  ]) );

}

