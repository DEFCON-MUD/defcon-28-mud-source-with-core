inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 4, 5 }));
  set_short( "Hallway - x35y4z5" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y5z5.c",
  "south" : DIR+"/rooms/x35y3z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
