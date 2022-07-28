inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 7 }));
  set_short( "Passage - x23y52z7" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y52z7.c",
  "north" : DIR+"/rooms/x23y53z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
