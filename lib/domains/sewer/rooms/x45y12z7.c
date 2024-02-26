inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 7 }));
  set_short( "Passage - x45y12z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y12z7.c",
  "north" : DIR+"/rooms/x45y13z7.c",
  "south" : DIR+"/rooms/x45y11z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
