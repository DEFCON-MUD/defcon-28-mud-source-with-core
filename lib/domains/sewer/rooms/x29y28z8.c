inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 8 }));
  set_short( "Corridor - x29y28z8" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z8.c",
  "east" : DIR+"/rooms/x30y28z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
