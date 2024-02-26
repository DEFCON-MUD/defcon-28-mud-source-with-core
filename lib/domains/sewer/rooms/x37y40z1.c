inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 1 }));
  set_short( "Corridor - x37y40z1" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y40z1.c",
  "north" : DIR+"/rooms/x37y41z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
