inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 29, 0 }));
  set_short( "Hallway - x3y29z0" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y30z0.c",
  "south" : DIR+"/rooms/x3y28z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
