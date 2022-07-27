inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 62, 6 }));
  set_short( "Corridor - x51y62z6" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y62z6.c",
  "south" : DIR+"/rooms/x51y61z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
