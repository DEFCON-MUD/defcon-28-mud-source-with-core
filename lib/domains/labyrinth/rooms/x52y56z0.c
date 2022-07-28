inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 56, 0 }));
  set_short( "Corridor - x52y56z0" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y56z0.c",
  "east" : DIR+"/rooms/x53y56z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
