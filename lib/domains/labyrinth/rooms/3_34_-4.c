inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 3, 34, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/glorzo.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/3_35_-4.c",
  "east" : DIR+"/rooms/4_34_-4.c",
  "north" : DIR+"/rooms/3_33_-4.c"
  ]) );

}

