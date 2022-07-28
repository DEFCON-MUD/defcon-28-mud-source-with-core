inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 3 }));
  set_short( "Hallway - x8y18z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z3.c",
  "east" : DIR+"/rooms/x9y18z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
