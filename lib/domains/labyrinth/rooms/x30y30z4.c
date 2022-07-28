inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 30, 4 }));
  set_short( "Corridor - x30y30z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y30z4.c",
  "east" : DIR+"/rooms/x31y30z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
