inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 30, 9 }));
  set_short( "Hallway - x8y30z9" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y30z9.c",
  "east" : DIR+"/rooms/x9y30z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
