inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 52, 0 }));
  set_short( "Corridor - x18y52z0" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y52z0.c",
  "east" : DIR+"/rooms/x19y52z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
