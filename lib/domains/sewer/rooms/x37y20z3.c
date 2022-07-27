inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 3 }));
  set_short( "Passage - x37y20z3" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y20z3.c",
  "north" : DIR+"/rooms/x37y21z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
