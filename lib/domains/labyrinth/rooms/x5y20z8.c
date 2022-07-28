inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 8 }));
  set_short( "Corridor - x5y20z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y20z8.c",
  "east" : DIR+"/rooms/x6y20z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
