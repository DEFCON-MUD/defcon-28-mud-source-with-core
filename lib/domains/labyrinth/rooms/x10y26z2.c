inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 26, 2 }));
  set_short( "Passage - x10y26z2" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y26z2.c",
  "east" : DIR+"/rooms/x11y26z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
