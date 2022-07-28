inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 3 }));
  set_short( "Corridor - x5y48z3" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z3.c",
  "east" : DIR+"/rooms/x6y48z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
