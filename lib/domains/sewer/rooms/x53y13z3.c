inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 13, 3 }));
  set_short( "Passage - x53y13z3" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y14z3.c",
  "south" : DIR+"/rooms/x53y12z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
