inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 45, 8 }));
  set_short( "Corridor - x37y45z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y46z8.c",
  "south" : DIR+"/rooms/x37y44z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
