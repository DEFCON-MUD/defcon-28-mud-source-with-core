inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 29, 0 }));
  set_short( "Passage - x59y29z0" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y30z0.c",
  "south" : DIR+"/rooms/x59y28z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
