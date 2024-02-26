inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 50, 1 }));
  set_short( "Corridor - x44y50z1" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y50z1.c",
  "east" : DIR+"/rooms/x45y50z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
