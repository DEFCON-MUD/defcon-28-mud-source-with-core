inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 25, 9 }));
  set_short( "Hallway - x51y25z9" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y26z9.c",
  "south" : DIR+"/rooms/x51y24z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
