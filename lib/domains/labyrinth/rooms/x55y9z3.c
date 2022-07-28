inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 3 }));
  set_short( "Hallway - x55y9z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z3.c",
  "south" : DIR+"/rooms/x55y8z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
