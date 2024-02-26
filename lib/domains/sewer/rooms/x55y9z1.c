inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 1 }));
  set_short( "Hallway - x55y9z1" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z1.c",
  "south" : DIR+"/rooms/x55y8z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
