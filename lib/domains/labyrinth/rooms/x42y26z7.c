inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 26, 7 }));
  set_short( "Hallway - x42y26z7" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y26z7.c",
  "east" : DIR+"/rooms/x43y26z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
