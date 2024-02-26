inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 5, 7 }));
  set_short( "Corridor - x9y5z7" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y6z7.c",
  "south" : DIR+"/rooms/x9y4z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
