inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 14, 9 }));
  set_short( "Hallway - x16y14z9" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y14z9.c",
  "east" : DIR+"/rooms/x17y14z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
