inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 3, 2 }));
  set_short( "Hallway - x43y3z2" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y4z2.c",
  "south" : DIR+"/rooms/x43y2z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
