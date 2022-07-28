inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 6 }));
  set_short( "Hallway - x39y6z6" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y6z6.c",
  "south" : DIR+"/rooms/x39y5z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
