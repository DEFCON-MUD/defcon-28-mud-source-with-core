inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 38, 4 }));
  set_short( "Passage - x34y38z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y38z4.c",
  "east" : DIR+"/rooms/x35y38z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
