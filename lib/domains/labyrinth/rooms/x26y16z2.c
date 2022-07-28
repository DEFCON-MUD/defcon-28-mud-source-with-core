inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 16, 2 }));
  set_short( "Corridor - x26y16z2" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y16z2.c",
  "east" : DIR+"/rooms/x27y16z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
