inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 5, 7 }));
  set_short( "Passage - x43y5z7" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y6z7.c",
  "south" : DIR+"/rooms/x43y4z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
