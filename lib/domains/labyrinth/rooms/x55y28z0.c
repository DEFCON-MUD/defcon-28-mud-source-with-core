inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 0 }));
  set_short( "Hallway - x55y28z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y28z0.c",
  "south" : DIR+"/rooms/x55y27z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
