inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 3 }));
  set_short( "Hallway - x43y25z3" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z3.c",
  "south" : DIR+"/rooms/x43y24z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
