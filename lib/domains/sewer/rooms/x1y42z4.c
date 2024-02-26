inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 4 }));
  set_short( "Passage - x1y42z4" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z4.c",
  "north" : DIR+"/rooms/x1y43z4.c",
  "south" : DIR+"/rooms/x1y41z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
