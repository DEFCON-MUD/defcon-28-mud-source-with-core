inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 1 }));
  set_short( "Hallway - x45y8z1" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y8z1.c",
  "south" : DIR+"/rooms/x45y7z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
