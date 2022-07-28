inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 0 }));
  set_short( "Corridor - x21y4z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y4z0.c",
  "east" : DIR+"/rooms/x22y4z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
