inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 3 }));
  set_short( "Hallway - x17y14z3" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z3.c",
  "south" : DIR+"/rooms/x17y13z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
