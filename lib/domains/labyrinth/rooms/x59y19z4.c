inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 19, 4 }));
  set_short( "Passage - x59y19z4" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y20z4.c",
  "south" : DIR+"/rooms/x59y18z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
