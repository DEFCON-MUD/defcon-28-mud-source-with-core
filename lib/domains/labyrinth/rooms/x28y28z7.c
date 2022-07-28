inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 28, 7 }));
  set_short( "Hallway - x28y28z7" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y28z7.c",
  "east" : DIR+"/rooms/x29y28z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
