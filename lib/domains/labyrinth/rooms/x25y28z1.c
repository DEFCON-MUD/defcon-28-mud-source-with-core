inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 1 }));
  set_short( "Passage - x25y28z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z1.c",
  "north" : DIR+"/rooms/x25y29z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
