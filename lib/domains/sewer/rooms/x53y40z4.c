inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 40, 4 }));
  set_short( "Passage - x53y40z4" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y40z4.c",
  "north" : DIR+"/rooms/x53y41z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
