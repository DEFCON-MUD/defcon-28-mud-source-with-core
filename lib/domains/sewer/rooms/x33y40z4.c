inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 40, 4 }));
  set_short( "Passage - x33y40z4" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y41z4.c",
  "south" : DIR+"/rooms/x33y39z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
