inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 22, 1 }));
  set_short( "Corridor - x36y22z1" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y22z1.c",
  "east" : DIR+"/rooms/x37y22z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
