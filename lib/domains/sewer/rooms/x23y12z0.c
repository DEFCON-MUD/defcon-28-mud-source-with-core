inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 0 }));
  set_short( "Passage - x23y12z0" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y13z0.c",
  "south" : DIR+"/rooms/x23y11z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
