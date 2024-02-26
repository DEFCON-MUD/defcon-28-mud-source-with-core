inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 8, 0 }));
  set_short( "Hallway - x1y8z0" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y8z0.c",
  "north" : DIR+"/rooms/x1y9z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
