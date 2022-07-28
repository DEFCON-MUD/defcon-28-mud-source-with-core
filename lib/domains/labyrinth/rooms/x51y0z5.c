inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 0, 5 }));
  set_short( "Hallway - x51y0z5" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y0z5.c",
  "east" : DIR+"/rooms/x52y0z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
