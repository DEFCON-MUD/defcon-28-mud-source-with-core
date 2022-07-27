inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 1 }));
  set_short( "Corridor - x21y40z1" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y40z1.c",
  "south" : DIR+"/rooms/x21y39z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
