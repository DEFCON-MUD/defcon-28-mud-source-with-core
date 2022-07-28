inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 56, 9 }));
  set_short( "Corridor - x44y56z9" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y56z9.c",
  "east" : DIR+"/rooms/x45y56z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
