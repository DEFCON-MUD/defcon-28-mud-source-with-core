inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 0 }));
  set_short( "Corridor - x51y40z0" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y40z0.c",
  "east" : DIR+"/rooms/x52y40z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
