inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 2 }));
  set_short( "Passage - x53y0z2" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z2.c",
  "east" : DIR+"/rooms/x54y0z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
