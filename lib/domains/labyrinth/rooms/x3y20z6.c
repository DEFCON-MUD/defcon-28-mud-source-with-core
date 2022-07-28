inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 6 }));
  set_short( "Passage - x3y20z6" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y20z6.c",
  "north" : DIR+"/rooms/x3y21z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
