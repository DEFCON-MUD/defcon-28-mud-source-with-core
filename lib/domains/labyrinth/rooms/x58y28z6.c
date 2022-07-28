inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 28, 6 }));
  set_short( "Hallway - x58y28z6" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y28z6.c",
  "east" : DIR+"/rooms/x59y28z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
