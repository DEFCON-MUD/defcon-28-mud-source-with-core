inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 28, 4 }));
  set_short( "Hallway - x10y28z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y28z4.c",
  "east" : DIR+"/rooms/x11y28z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
