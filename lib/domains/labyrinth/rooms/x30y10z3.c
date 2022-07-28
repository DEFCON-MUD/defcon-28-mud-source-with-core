inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 10, 3 }));
  set_short( "Passage - x30y10z3" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y10z3.c",
  "east" : DIR+"/rooms/x31y10z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
