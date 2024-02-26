inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 0, 3 }));
  set_short( "Corridor - x26y0z3" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y0z3.c",
  "east" : DIR+"/rooms/x27y0z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
