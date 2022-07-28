inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 9 }));
  set_short( "Corridor - x33y44z9" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y44z9.c",
  "east" : DIR+"/rooms/x34y44z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
