inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 6 }));
  set_short( "Hallway - x51y38z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y38z6.c",
  "south" : DIR+"/rooms/x51y37z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
