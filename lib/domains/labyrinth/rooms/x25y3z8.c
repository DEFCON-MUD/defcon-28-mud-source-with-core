inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 3, 8 }));
  set_short( "Hallway - x25y3z8" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y4z8.c",
  "south" : DIR+"/rooms/x25y2z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
