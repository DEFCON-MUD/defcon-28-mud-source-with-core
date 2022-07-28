inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 7 }));
  set_short( "Hallway - x27y30z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y30z7.c",
  "south" : DIR+"/rooms/x27y29z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
