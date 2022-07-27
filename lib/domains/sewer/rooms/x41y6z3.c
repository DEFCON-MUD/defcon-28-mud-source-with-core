inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 3 }));
  set_short( "Passage - x41y6z3" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y6z3.c",
  "north" : DIR+"/rooms/x41y7z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
