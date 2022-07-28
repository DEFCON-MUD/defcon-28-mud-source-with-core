inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 6 }));
  set_short( "Hallway - x51y50z6" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y50z6.c",
  "east" : DIR+"/rooms/x52y50z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
