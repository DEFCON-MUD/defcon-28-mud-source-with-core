inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 2 }));
  set_short( "Passage - x49y60z2" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z2.c",
  "north" : DIR+"/rooms/x49y61z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
