inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 8 }));
  set_short( "Corridor - x59y56z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y56z8.c",
  "east" : DIR+"/rooms/x60y56z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
