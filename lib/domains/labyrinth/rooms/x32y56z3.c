inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 56, 3 }));
  set_short( "Passage - x32y56z3" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y56z3.c",
  "east" : DIR+"/rooms/x33y56z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
