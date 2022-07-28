inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 11, 7 }));
  set_short( "Corridor - x13y11z7" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y12z7.c",
  "south" : DIR+"/rooms/x13y10z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
