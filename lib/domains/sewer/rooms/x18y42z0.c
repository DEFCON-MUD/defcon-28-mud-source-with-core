inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 42, 0 }));
  set_short( "Hallway - x18y42z0" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y42z0.c",
  "east" : DIR+"/rooms/x19y42z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
