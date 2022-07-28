inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 9 }));
  set_short( "Passage - x55y10z9" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y10z9.c",
  "south" : DIR+"/rooms/x55y9z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
