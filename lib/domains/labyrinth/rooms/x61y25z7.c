inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 7 }));
  set_short( "Passage - x61y25z7" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z7.c",
  "south" : DIR+"/rooms/x61y24z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
