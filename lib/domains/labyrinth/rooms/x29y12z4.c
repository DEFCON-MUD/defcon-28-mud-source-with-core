inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 4 }));
  set_short( "Hallway - x29y12z4" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y12z4.c",
  "south" : DIR+"/rooms/x29y11z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
