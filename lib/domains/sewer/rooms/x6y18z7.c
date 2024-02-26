inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 18, 7 }));
  set_short( "Hallway - x6y18z7" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y18z7.c",
  "east" : DIR+"/rooms/x7y18z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
