inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 0, 6 }));
  set_short( "Corridor - x23y0z6" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y0z6.c",
  "east" : DIR+"/rooms/x24y0z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
