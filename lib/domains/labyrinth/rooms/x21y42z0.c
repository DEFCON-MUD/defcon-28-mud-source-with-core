inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 42, 0 }));
  set_short( "Hallway - x21y42z0" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y43z0.c",
  "south" : DIR+"/rooms/x21y41z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
