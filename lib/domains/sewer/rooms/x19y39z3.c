inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 3 }));
  set_short( "Hallway - x19y39z3" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z3.c",
  "south" : DIR+"/rooms/x19y38z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
