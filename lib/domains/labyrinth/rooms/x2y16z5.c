inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 16, 5 }));
  set_short( "Passage - x2y16z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y16z5.c",
  "east" : DIR+"/rooms/x3y16z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
