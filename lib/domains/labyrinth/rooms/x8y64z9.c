inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 64, 9 }));
  set_short( "Hallway - x8y64z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y64z9.c",
  "east" : DIR+"/rooms/x9y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
