inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 35, 43, -5 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/goon.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/35_44_-5.c",
  "north" : DIR+"/rooms/35_42_-5.c"
  ]) );

}

