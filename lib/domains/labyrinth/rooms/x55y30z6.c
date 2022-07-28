inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 6 }));
  set_short( "Passage - x55y30z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y30z6.c",
  "east" : DIR+"/rooms/x56y30z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
