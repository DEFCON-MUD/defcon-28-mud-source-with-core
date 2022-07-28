inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 31, 4 }));
  set_short( "Hallway - x7y31z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y32z4.c",
  "south" : DIR+"/rooms/x7y30z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
