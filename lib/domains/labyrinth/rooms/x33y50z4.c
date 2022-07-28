inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 4 }));
  set_short( "Hallway - x33y50z4" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y50z4.c",
  "south" : DIR+"/rooms/x33y49z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
