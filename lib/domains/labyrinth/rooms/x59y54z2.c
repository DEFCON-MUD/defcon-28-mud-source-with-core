inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 2 }));
  set_short( "Hallway - x59y54z2" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y54z2.c",
  "south" : DIR+"/rooms/x59y53z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
