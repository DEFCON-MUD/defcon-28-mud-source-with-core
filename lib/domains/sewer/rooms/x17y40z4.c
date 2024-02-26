inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 40, 4 }));
  set_short( "Passage - x17y40z4" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y40z4.c",
  "east" : DIR+"/rooms/x18y40z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
