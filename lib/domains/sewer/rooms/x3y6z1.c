inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 1 }));
  set_short( "Passage - x3y6z1" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y6z1.c",
  "south" : DIR+"/rooms/x3y5z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
