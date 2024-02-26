inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 4 }));
  set_short( "Passage - x21y25z4" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z4.c",
  "south" : DIR+"/rooms/x21y24z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
