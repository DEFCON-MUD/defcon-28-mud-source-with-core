inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 2 }));
  set_short( "Passage - x45y14z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y14z2.c",
  "south" : DIR+"/rooms/x45y13z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
