inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 29, 7 }));
  set_short( "Corridor - x57y29z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y30z7.c",
  "south" : DIR+"/rooms/x57y28z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
