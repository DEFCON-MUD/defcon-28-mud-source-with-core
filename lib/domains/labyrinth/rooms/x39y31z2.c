inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 2 }));
  set_short( "Hallway - x39y31z2" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z2.c",
  "south" : DIR+"/rooms/x39y30z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
