inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 32, 1 }));
  set_short( "Passage - x51y32z1" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y32z1.c",
  "east" : DIR+"/rooms/x52y32z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
