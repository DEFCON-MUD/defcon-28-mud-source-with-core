inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 62, 3 }));
  set_short( "Passage - x56y62z3" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y62z3.c",
  "east" : DIR+"/rooms/x57y62z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
