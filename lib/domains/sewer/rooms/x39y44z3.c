inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 3 }));
  set_short( "Hallway - x39y44z3" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y44z3.c",
  "east" : DIR+"/rooms/x40y44z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
