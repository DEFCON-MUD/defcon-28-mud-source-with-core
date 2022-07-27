inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 8 }));
  set_short( "Corridor - x53y41z8" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z8.c",
  "south" : DIR+"/rooms/x53y40z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
