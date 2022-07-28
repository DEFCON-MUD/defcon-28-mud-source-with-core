inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 0 }));
  set_short( "Hallway - x13y32z0" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y32z0.c",
  "south" : DIR+"/rooms/x13y31z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
