inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 21, 16, -2 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/stoner.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/20_16_-2.c",
  "east" : DIR+"/rooms/22_16_-2.c"
  ]) );

}

