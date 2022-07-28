inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 4 }));
  set_short( "Passage - x29y16z4" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y16z4.c",
  "east" : DIR+"/rooms/x30y16z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
