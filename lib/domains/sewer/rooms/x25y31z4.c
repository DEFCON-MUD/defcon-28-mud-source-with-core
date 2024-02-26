inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 31, 4 }));
  set_short( "Passage - x25y31z4" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y32z4.c",
  "south" : DIR+"/rooms/x25y30z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
