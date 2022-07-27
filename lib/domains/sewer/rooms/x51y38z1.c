inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 1 }));
  set_short( "Corridor - x51y38z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y39z1.c",
  "south" : DIR+"/rooms/x51y37z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
