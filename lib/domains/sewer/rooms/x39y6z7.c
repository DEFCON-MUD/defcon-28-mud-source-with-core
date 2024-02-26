inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 7 }));
  set_short( "Passage - x39y6z7" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y7z7.c",
  "south" : DIR+"/rooms/x39y5z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
