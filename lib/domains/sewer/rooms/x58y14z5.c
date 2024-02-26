inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 5 }));
  set_short( "Passage - x58y14z5" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z5.c",
  "east" : DIR+"/rooms/x59y14z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
