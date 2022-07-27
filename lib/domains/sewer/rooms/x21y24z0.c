inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 0 }));
  set_short( "Hallway - x21y24z0" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y24z0.c",
  "north" : DIR+"/rooms/x21y25z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
