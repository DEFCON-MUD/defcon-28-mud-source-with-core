inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 58, 5 }));
  set_short( "Hallway - x46y58z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y58z5.c",
  "east" : DIR+"/rooms/x47y58z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
