inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 34, 5 }));
  set_short( "Passage - x18y34z5" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y34z5.c",
  "east" : DIR+"/rooms/x19y34z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
