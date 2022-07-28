inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 36, 7 }));
  set_short( "Corridor - x8y36z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y36z7.c",
  "east" : DIR+"/rooms/x9y36z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
