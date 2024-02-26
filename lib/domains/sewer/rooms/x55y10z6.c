inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 6 }));
  set_short( "Passage - x55y10z6" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y11z6.c",
  "south" : DIR+"/rooms/x55y9z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
