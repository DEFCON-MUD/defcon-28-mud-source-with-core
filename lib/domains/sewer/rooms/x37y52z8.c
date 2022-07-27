inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 8 }));
  set_short( "Hallway - x37y52z8" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y52z8.c",
  "north" : DIR+"/rooms/x37y53z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
