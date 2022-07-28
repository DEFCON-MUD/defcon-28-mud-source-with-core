inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 9 }));
  set_short( "Hallway - x1y20z9" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y20z9.c",
  "south" : DIR+"/rooms/x1y19z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
