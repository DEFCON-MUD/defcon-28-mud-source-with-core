inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 4, 2 }));
  set_short( "Passage - x2y4z2" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y4z2.c",
  "east" : DIR+"/rooms/x3y4z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
