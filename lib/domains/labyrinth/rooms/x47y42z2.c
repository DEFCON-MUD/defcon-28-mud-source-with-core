inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 42, 2 }));
  set_short( "Hallway - x47y42z2" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y42z2.c",
  "east" : DIR+"/rooms/x48y42z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
