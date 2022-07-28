inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 8 }));
  set_short( "Passage - x29y6z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y6z8.c",
  "east" : DIR+"/rooms/x30y6z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
