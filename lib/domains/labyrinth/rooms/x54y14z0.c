inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 14, 0 }));
  set_short( "Passage - x54y14z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y14z0.c",
  "east" : DIR+"/rooms/x55y14z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
