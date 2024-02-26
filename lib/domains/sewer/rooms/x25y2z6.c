inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 6 }));
  set_short( "Passage - x25y2z6" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y2z6.c",
  "east" : DIR+"/rooms/x26y2z6.c",
  "north" : DIR+"/rooms/x25y3z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
