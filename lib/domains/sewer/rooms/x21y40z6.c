inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 6 }));
  set_short( "Corridor - x21y40z6" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y40z6.c",
  "north" : DIR+"/rooms/x21y41z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
