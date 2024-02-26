inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 0 }));
  set_short( "Passage - x3y64z0" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z0.c",
  "east" : DIR+"/rooms/x4y64z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
