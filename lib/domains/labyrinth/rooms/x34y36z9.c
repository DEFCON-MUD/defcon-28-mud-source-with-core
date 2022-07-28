inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 36, 9 }));
  set_short( "Hallway - x34y36z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y36z9.c",
  "east" : DIR+"/rooms/x35y36z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
