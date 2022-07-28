inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 3, 6 }));
  set_short( "Passage - x25y3z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y4z6.c",
  "south" : DIR+"/rooms/x25y2z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
