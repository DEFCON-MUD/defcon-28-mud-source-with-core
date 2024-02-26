inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 60, 3 }));
  set_short( "Hallway - x56y60z3" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y60z3.c",
  "east" : DIR+"/rooms/x57y60z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
