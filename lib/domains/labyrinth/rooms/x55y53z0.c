inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 53, 0 }));
  set_short( "Passage - x55y53z0" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y54z0.c",
  "south" : DIR+"/rooms/x55y52z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
