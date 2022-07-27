inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 3 }));
  set_short( "Hallway - x39y28z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y28z3.c",
  "east" : DIR+"/rooms/x40y28z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
