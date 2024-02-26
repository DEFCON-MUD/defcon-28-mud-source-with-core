inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 6 }));
  set_short( "Passage - x19y32z6" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y32z6.c",
  "north" : DIR+"/rooms/x19y33z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
