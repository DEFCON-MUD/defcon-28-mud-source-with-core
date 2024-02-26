inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 60, 7 }));
  set_short( "Passage - x25y60z7" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y60z7.c",
  "south" : DIR+"/rooms/x25y59z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
