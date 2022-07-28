inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 0 }));
  set_short( "Hallway - x25y44z0" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y44z0.c",
  "east" : DIR+"/rooms/x26y44z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
