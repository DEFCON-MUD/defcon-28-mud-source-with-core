inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 2, 0 }));
  set_short( "Corridor - x52y2z0" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y2z0.c",
  "east" : DIR+"/rooms/x53y2z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
