inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 36, 0 }));
  set_short( "Hallway - x16y36z0" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y36z0.c",
  "east" : DIR+"/rooms/x17y36z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
