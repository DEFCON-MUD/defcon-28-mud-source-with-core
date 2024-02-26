inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 9, 4 }));
  set_short( "Corridor - x45y9z4" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y10z4.c",
  "south" : DIR+"/rooms/x45y8z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
