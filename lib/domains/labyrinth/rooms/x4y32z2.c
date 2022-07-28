inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 32, 2 }));
  set_short( "Passage - x4y32z2" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y32z2.c",
  "east" : DIR+"/rooms/x5y32z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
