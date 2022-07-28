inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 58, 9 }));
  set_short( "Hallway - x11y58z9" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y58z9.c",
  "north" : DIR+"/rooms/x11y59z9.c",
  "south" : DIR+"/rooms/x11y57z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
