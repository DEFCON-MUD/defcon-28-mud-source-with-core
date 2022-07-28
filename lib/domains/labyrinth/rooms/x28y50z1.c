inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 50, 1 }));
  set_short( "Passage - x28y50z1" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y50z1.c",
  "east" : DIR+"/rooms/x29y50z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
