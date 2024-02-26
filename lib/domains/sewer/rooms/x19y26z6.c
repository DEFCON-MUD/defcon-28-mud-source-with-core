inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 6 }));
  set_short( "Corridor - x19y26z6" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y26z6.c",
  "north" : DIR+"/rooms/x19y27z6.c",
  "south" : DIR+"/rooms/x19y25z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
