inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 4 }));
  set_short( "Corridor - x21y2z4" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y2z4.c",
  "east" : DIR+"/rooms/x22y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
