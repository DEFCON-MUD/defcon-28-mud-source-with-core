inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 19, 22, -0 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPU's that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/18_22_-0.c",
  "south" : DIR+"/rooms/19_23_-0.c"
  ]) );

}

