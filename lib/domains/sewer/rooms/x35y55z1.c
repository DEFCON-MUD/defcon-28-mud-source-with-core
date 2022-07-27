inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 55, 1 }));
  set_short( "Hallway - x35y55z1" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y56z1.c",
  "south" : DIR+"/rooms/x35y54z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
