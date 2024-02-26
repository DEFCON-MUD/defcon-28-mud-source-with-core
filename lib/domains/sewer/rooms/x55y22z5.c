inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 5 }));
  set_short( "Passage - x55y22z5" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y22z5.c",
  "east" : DIR+"/rooms/x56y22z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
