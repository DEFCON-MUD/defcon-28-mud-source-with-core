inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 62, 1 }));
  set_short( "Corridor - x42y62z1" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y62z1.c",
  "east" : DIR+"/rooms/x43y62z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
