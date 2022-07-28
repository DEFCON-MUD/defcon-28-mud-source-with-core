inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 3 }));
  set_short( "Hallway - x17y28z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z3.c",
  "east" : DIR+"/rooms/x18y28z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
