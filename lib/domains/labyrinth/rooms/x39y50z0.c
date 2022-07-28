inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 0 }));
  set_short( "Hallway - x39y50z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y50z0.c",
  "east" : DIR+"/rooms/x40y50z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
