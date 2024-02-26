inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 37, 2 }));
  set_short( "Corridor - x1y37z2" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y38z2.c",
  "south" : DIR+"/rooms/x1y36z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
