inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 40, 7 }));
  set_short( "Corridor - x16y40z7" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y40z7.c",
  "east" : DIR+"/rooms/x17y40z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
