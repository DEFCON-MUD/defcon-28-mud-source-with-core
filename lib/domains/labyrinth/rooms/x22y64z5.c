inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 64, 5 }));
  set_short( "Hallway - x22y64z5" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y64z5.c",
  "east" : DIR+"/rooms/x23y64z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
