inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 2 }));
  set_short( "Hallway - x51y34z2" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y34z2.c",
  "east" : DIR+"/rooms/x52y34z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
