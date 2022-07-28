inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 30, 0 }));
  set_short( "Corridor - x8y30z0" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y30z0.c",
  "east" : DIR+"/rooms/x9y30z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
