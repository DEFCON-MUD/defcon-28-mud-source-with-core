inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 7 }));
  set_short( "Hallway - x27y26z7" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y26z7.c",
  "south" : DIR+"/rooms/x27y25z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
