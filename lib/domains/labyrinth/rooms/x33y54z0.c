inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 0 }));
  set_short( "Hallway - x33y54z0" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y54z0.c",
  "east" : DIR+"/rooms/x34y54z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
