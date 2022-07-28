inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 7 }));
  set_short( "Passage - x49y45z7" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z7.c",
  "south" : DIR+"/rooms/x49y44z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
