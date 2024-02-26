inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 52, 3 }));
  set_short( "Hallway - x21y52z3" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y52z3.c",
  "north" : DIR+"/rooms/x21y53z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
