inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 0 }));
  set_short( "Hallway - x37y64z0" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z0.c",
  "east" : DIR+"/rooms/x38y64z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
