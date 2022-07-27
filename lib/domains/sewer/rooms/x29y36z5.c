inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 36, 5 }));
  set_short( "Hallway - x29y36z5" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y36z5.c",
  "north" : DIR+"/rooms/x29y37z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
