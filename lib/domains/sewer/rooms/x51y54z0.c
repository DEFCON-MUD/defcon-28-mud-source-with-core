inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 54, 0 }));
  set_short( "Hallway - x51y54z0" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y55z0.c",
  "south" : DIR+"/rooms/x51y53z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
