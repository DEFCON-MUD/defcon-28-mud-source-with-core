inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 0 }));
  set_short( "Passage - x21y0z0" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z0.c",
  "east" : DIR+"/rooms/x22y0z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
