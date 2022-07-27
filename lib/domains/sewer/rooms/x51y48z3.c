inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 3 }));
  set_short( "Hallway - x51y48z3" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y48z3.c",
  "north" : DIR+"/rooms/x51y49z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
