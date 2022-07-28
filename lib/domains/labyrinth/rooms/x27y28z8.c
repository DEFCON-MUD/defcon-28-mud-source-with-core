inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 8 }));
  set_short( "Hallway - x27y28z8" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y28z8.c",
  "east" : DIR+"/rooms/x28y28z8.c",
  "south" : DIR+"/rooms/x27y27z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
