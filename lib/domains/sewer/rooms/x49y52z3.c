inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 3 }));
  set_short( "Hallway - x49y52z3" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y52z3.c",
  "south" : DIR+"/rooms/x49y51z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
