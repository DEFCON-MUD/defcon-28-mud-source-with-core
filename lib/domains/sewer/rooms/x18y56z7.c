inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 56, 7 }));
  set_short( "Passage - x18y56z7" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y56z7.c",
  "east" : DIR+"/rooms/x19y56z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
