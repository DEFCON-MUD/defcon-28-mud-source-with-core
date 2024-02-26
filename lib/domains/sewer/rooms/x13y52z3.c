inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 3 }));
  set_short( "Hallway - x13y52z3" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y52z3.c",
  "east" : DIR+"/rooms/x14y52z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
