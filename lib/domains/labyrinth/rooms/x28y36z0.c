inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 36, 0 }));
  set_short( "Passage - x28y36z0" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y36z0.c",
  "east" : DIR+"/rooms/x29y36z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
