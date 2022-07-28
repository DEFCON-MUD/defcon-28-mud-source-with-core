inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 64, 0 }));
  set_short( "Hallway - x48y64z0" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y64z0.c",
  "east" : DIR+"/rooms/x49y64z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
