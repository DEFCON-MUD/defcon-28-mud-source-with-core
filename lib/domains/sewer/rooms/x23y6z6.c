inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 6 }));
  set_short( "Passage - x23y6z6" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y6z6.c",
  "north" : DIR+"/rooms/x23y7z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
