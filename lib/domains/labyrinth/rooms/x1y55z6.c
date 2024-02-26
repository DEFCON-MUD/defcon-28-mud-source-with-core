inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 6 }));
  set_short( "Corridor - x1y55z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z6.c",
  "south" : DIR+"/rooms/x1y54z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
