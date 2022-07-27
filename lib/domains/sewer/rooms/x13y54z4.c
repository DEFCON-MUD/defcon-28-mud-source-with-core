inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 4 }));
  set_short( "Hallway - x13y54z4" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y54z4.c",
  "south" : DIR+"/rooms/x13y53z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
