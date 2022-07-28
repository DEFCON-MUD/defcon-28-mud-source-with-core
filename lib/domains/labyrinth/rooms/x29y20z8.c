inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 8 }));
  set_short( "Corridor - x29y20z8" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y21z8.c",
  "south" : DIR+"/rooms/x29y19z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
