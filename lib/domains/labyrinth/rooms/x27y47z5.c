inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 47, 5 }));
  set_short( "Passage - x27y47z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y48z5.c",
  "south" : DIR+"/rooms/x27y46z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
