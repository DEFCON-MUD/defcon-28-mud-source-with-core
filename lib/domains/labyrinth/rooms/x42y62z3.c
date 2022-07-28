inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 62, 3 }));
  set_short( "Passage - x42y62z3" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y62z3.c",
  "east" : DIR+"/rooms/x43y62z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
