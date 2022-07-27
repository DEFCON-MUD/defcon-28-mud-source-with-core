inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 3 }));
  set_short( "Corridor - x27y46z3" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y47z3.c",
  "south" : DIR+"/rooms/x27y45z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
