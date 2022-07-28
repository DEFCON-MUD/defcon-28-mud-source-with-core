inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 62, 5 }));
  set_short( "Hallway - x18y62z5" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y62z5.c",
  "east" : DIR+"/rooms/x19y62z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
