inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 50, 8 }));
  set_short( "Passage - x42y50z8" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y50z8.c",
  "east" : DIR+"/rooms/x43y50z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
