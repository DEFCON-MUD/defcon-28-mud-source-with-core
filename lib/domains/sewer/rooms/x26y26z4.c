inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 26, 4 }));
  set_short( "Passage - x26y26z4" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y26z4.c",
  "east" : DIR+"/rooms/x27y26z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
