inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 50, 1 }));
  set_short( "Hallway - x48y50z1" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y50z1.c",
  "east" : DIR+"/rooms/x49y50z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
