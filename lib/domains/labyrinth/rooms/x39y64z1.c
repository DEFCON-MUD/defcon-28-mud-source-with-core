inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 64, 1 }));
  set_short( "Hallway - x39y64z1" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y64z1.c",
  "east" : DIR+"/rooms/x40y64z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
