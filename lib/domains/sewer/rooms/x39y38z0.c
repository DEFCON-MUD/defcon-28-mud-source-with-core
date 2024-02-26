inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 38, 0 }));
  set_short( "Corridor - x39y38z0" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y39z0.c",
  "south" : DIR+"/rooms/x39y37z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
