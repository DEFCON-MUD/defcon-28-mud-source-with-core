inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 2 }));
  set_short( "Hallway - x15y48z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y48z2.c",
  "east" : DIR+"/rooms/x16y48z2.c",
  "south" : DIR+"/rooms/x15y47z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
