inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 44, 50, -0 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/43_50_-0.c",
  "east" : DIR+"/rooms/45_50_-0.c"
  ]) );

}

