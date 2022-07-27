inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 5 }));
  set_short( "Hallway - x13y50z5" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y50z5.c",
  "north" : DIR+"/rooms/x13y51z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
