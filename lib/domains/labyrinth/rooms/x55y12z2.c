inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 12, 2 }));
  set_short( "Corridor - x55y12z2" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y12z2.c",
  "east" : DIR+"/rooms/x56y12z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
