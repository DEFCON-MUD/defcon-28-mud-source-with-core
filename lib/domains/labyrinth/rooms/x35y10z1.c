inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 10, 1 }));
  set_short( "Hallway - x35y10z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y10z1.c",
  "east" : DIR+"/rooms/x36y10z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
