inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 30, 0 }));
  set_short( "Passage - x32y30z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y30z0.c",
  "east" : DIR+"/rooms/x33y30z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
