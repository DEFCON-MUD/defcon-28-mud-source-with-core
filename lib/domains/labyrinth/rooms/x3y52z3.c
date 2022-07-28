inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 52, 3 }));
  set_short( "Hallway - x3y52z3" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y52z3.c",
  "south" : DIR+"/rooms/x3y51z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
