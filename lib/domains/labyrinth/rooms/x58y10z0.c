inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 10, 0 }));
  set_short( "Corridor - x58y10z0" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y10z0.c",
  "east" : DIR+"/rooms/x59y10z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
