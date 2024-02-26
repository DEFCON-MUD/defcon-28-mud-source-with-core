inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 3 }));
  set_short( "Hallway - x29y48z3" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y48z3.c",
  "south" : DIR+"/rooms/x29y47z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
