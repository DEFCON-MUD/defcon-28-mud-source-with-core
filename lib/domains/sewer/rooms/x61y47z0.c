inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 47, 0 }));
  set_short( "Passage - x61y47z0" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y48z0.c",
  "south" : DIR+"/rooms/x61y46z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
