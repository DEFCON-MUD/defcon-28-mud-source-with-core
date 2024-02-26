inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 4, 2 }));
  set_short( "Corridor - x38y4z2" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y4z2.c",
  "east" : DIR+"/rooms/x39y4z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
