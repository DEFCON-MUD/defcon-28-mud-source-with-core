inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 2 }));
  set_short( "Passage - x31y20z2" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y21z2.c",
  "south" : DIR+"/rooms/x31y19z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
