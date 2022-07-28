inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 7 }));
  set_short( "Passage - x55y10z7" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y10z7.c",
  "north" : DIR+"/rooms/x55y11z7.c",
  "south" : DIR+"/rooms/x55y9z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
