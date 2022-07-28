inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 35, 4 }));
  set_short( "Passage - x47y35z4" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y36z4.c",
  "south" : DIR+"/rooms/x47y34z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
