inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 32, 7 }));
  set_short( "Passage - x54y32z7" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y32z7.c",
  "east" : DIR+"/rooms/x55y32z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
