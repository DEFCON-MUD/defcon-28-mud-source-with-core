inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 31, 2 }));
  set_short( "Hallway - x35y31z2" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y32z2.c",
  "south" : DIR+"/rooms/x35y30z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
