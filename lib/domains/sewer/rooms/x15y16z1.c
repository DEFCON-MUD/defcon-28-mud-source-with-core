inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 1 }));
  set_short( "Hallway - x15y16z1" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y16z1.c",
  "north" : DIR+"/rooms/x15y17z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
