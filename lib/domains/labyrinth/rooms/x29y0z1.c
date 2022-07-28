inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 1 }));
  set_short( "Passage - x29y0z1" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z1.c",
  "east" : DIR+"/rooms/x30y0z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
