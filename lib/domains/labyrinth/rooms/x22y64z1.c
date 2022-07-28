inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 64, 1 }));
  set_short( "Hallway - x22y64z1" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y64z1.c",
  "east" : DIR+"/rooms/x23y64z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
