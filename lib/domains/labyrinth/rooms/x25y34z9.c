inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 9 }));
  set_short( "Corridor - x25y34z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y34z9.c",
  "north" : DIR+"/rooms/x25y35z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
