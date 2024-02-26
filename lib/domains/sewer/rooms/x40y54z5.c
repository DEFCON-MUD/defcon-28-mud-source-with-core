inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 54, 5 }));
  set_short( "Passage - x40y54z5" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y54z5.c",
  "east" : DIR+"/rooms/x41y54z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
