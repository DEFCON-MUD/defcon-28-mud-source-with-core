inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 57, 0 }));
  set_short( "Passage - x11y57z0" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y58z0.c",
  "south" : DIR+"/rooms/x11y56z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
