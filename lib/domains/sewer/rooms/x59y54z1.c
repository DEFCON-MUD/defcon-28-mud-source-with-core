inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 1 }));
  set_short( "Hallway - x59y54z1" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y54z1.c",
  "south" : DIR+"/rooms/x59y53z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
