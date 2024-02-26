inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 4 }));
  set_short( "Hallway - x23y4z4" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y4z4.c",
  "east" : DIR+"/rooms/x24y4z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
