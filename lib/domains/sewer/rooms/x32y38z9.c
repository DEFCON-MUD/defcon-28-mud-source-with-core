inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 38, 9 }));
  set_short( "Passage - x32y38z9" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y38z9.c",
  "east" : DIR+"/rooms/x33y38z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
