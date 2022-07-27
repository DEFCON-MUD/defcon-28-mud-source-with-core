inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 2 }));
  set_short( "Hallway - x7y8z2" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z2.c",
  "north" : DIR+"/rooms/x7y9z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
