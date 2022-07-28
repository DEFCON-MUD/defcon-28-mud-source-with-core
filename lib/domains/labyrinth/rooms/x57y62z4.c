inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 4 }));
  set_short( "Corridor - x57y62z4" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z4.c",
  "east" : DIR+"/rooms/x58y62z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
