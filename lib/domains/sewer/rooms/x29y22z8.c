inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 8 }));
  set_short( "Passage - x29y22z8" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y22z8.c",
  "south" : DIR+"/rooms/x29y21z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
