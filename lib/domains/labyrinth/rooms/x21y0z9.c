inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 9 }));
  set_short( "Hallway - x21y0z9" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z9.c",
  "east" : DIR+"/rooms/x22y0z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
