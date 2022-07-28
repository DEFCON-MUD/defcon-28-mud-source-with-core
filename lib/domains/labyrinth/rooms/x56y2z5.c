inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 5 }));
  set_short( "Corridor - x56y2z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z5.c",
  "east" : DIR+"/rooms/x57y2z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
