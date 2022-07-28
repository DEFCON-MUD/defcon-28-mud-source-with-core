inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 6 }));
  set_short( "Passage - x25y38z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y38z6.c",
  "east" : DIR+"/rooms/x26y38z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
