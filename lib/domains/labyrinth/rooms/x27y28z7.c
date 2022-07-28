inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 7 }));
  set_short( "Hallway - x27y28z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y28z7.c",
  "north" : DIR+"/rooms/x27y29z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
