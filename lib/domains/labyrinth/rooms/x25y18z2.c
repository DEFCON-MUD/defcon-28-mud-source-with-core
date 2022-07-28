inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 18, 2 }));
  set_short( "Passage - x25y18z2" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y19z2.c",
  "south" : DIR+"/rooms/x25y17z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
