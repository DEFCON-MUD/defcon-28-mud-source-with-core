inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 5, 6 }));
  set_short( "Hallway - x37y5z6" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y6z6.c",
  "south" : DIR+"/rooms/x37y4z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
