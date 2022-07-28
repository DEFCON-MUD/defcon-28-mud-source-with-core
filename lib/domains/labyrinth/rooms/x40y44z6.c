inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 44, 6 }));
  set_short( "Passage - x40y44z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y44z6.c",
  "east" : DIR+"/rooms/x41y44z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
