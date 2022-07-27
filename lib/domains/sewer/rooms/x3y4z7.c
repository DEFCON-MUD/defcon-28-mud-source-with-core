inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 7 }));
  set_short( "Hallway - x3y4z7" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y4z7.c",
  "north" : DIR+"/rooms/x3y5z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
