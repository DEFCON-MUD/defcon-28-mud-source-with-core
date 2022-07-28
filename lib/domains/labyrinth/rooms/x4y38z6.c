inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 38, 6 }));
  set_short( "Hallway - x4y38z6" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y38z6.c",
  "east" : DIR+"/rooms/x5y38z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
