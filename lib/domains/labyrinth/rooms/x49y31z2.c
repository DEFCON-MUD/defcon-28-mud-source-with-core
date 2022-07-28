inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 31, 2 }));
  set_short( "Corridor - x49y31z2" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y32z2.c",
  "south" : DIR+"/rooms/x49y30z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
