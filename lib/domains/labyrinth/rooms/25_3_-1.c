inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 25, 3, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/25_4_-1.c",
  "north" : DIR+"/rooms/25_2_-1.c"
  ]) );

}

