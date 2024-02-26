inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 5 }));
  set_short( "Passage - x51y10z5" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y10z5.c",
  "east" : DIR+"/rooms/x52y10z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
