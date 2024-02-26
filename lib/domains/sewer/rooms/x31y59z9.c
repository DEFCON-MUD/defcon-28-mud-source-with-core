inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 59, 9 }));
  set_short( "Hallway - x31y59z9" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y60z9.c",
  "south" : DIR+"/rooms/x31y58z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
