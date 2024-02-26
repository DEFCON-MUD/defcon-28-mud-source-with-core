inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 64, 0 }));
  set_short( "Passage - x1y64z0" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y64z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
