inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 9, 3 }));
  set_short( "Corridor - x27y9z3" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y10z3.c",
  "south" : DIR+"/rooms/x27y8z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
