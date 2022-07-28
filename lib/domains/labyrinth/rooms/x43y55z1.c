inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 55, 1 }));
  set_short( "Corridor - x43y55z1" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y56z1.c",
  "south" : DIR+"/rooms/x43y54z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
