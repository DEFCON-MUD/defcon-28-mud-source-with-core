inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 9 }));
  set_short( "Corridor - x47y34z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y34z9.c",
  "east" : DIR+"/rooms/x48y34z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
