inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 36, 3 }));
  set_short( "Hallway - x40y36z3" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y36z3.c",
  "east" : DIR+"/rooms/x41y36z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
