inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 3 }));
  set_short( "Corridor - x41y0z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z3.c",
  "east" : DIR+"/rooms/x42y0z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
