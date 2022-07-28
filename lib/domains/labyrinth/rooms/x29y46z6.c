inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 6 }));
  set_short( "Passage - x29y46z6" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y46z6.c",
  "north" : DIR+"/rooms/x29y47z6.c",
  "south" : DIR+"/rooms/x29y45z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
