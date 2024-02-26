inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 1 }));
  set_short( "Corridor - x29y14z1" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y14z1.c",
  "east" : DIR+"/rooms/x30y14z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
