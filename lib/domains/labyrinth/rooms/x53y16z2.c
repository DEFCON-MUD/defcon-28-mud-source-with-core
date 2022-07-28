inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 2 }));
  set_short( "Passage - x53y16z2" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y16z2.c",
  "south" : DIR+"/rooms/x53y15z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
