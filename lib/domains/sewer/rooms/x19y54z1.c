inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 1 }));
  set_short( "Passage - x19y54z1" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y54z1.c",
  "south" : DIR+"/rooms/x19y53z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
