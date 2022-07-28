inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 3 }));
  set_short( "Corridor - x29y60z3" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y60z3.c",
  "east" : DIR+"/rooms/x30y60z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
