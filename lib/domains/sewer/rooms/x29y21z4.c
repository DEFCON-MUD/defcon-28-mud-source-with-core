inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 21, 4 }));
  set_short( "Passage - x29y21z4" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y22z4.c",
  "south" : DIR+"/rooms/x29y20z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
