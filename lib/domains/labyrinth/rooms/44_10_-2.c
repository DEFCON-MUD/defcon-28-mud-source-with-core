inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 44, 10, -2 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/coder.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/43_10_-2.c",
  "east" : DIR+"/rooms/45_10_-2.c"
  ]) );

}

