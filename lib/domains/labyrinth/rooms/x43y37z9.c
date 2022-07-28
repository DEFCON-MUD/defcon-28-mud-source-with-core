inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 37, 9 }));
  set_short( "Corridor - x43y37z9" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y38z9.c",
  "south" : DIR+"/rooms/x43y36z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
