inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 4 }));
  set_short( "Passage - x29y56z4" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y56z4.c",
  "north" : DIR+"/rooms/x29y57z4.c",
  "south" : DIR+"/rooms/x29y55z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
