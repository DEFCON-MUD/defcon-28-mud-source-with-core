inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 2 }));
  set_short( "Hallway - x27y12z2" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y12z2.c",
  "south" : DIR+"/rooms/x27y11z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
