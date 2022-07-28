inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 1 }));
  set_short( "Corridor - x31y30z1" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y30z1.c",
  "south" : DIR+"/rooms/x31y29z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
