inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 2, 3 }));
  set_short( "Hallway - x44y2z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y2z3.c",
  "east" : DIR+"/rooms/x45y2z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
