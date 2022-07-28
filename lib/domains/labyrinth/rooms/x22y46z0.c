inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 0 }));
  set_short( "Passage - x22y46z0" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z0.c",
  "east" : DIR+"/rooms/x23y46z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
