inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 51, 6 }));
  set_short( "Passage - x35y51z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y52z6.c",
  "south" : DIR+"/rooms/x35y50z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
