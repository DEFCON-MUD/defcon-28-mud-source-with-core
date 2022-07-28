inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 20, 9 }));
  set_short( "Passage - x58y20z9" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y20z9.c",
  "east" : DIR+"/rooms/x59y20z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
