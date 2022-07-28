inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 4 }));
  set_short( "Hallway - x46y64z4" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z4.c",
  "east" : DIR+"/rooms/x47y64z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
