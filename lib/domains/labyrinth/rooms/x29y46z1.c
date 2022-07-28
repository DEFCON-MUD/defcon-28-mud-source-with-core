inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 1 }));
  set_short( "Corridor - x29y46z1" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y46z1.c",
  "east" : DIR+"/rooms/x30y46z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
