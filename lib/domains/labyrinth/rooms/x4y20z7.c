inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 20, 7 }));
  set_short( "Hallway - x4y20z7" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y20z7.c",
  "east" : DIR+"/rooms/x5y20z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
