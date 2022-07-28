inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 32, 6 }));
  set_short( "Hallway - x30y32z6" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y32z6.c",
  "east" : DIR+"/rooms/x31y32z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
