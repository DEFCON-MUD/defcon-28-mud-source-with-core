inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 64, 9 }));
  set_short( "Corridor - x55y64z9" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y64z9.c",
  "east" : DIR+"/rooms/x56y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
