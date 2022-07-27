inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 5, 3 }));
  set_short( "Passage - x23y5z3" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y6z3.c",
  "south" : DIR+"/rooms/x23y4z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
