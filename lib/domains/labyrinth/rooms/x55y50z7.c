inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 7 }));
  set_short( "Hallway - x55y50z7" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y50z7.c",
  "south" : DIR+"/rooms/x55y49z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
