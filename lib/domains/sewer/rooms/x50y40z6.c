inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 40, 6 }));
  set_short( "Passage - x50y40z6" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y40z6.c",
  "east" : DIR+"/rooms/x51y40z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
