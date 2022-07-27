inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 4 }));
  set_short( "Passage - x5y26z4" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y26z4.c",
  "south" : DIR+"/rooms/x5y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
