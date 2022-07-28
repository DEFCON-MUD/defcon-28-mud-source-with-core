inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 9 }));
  set_short( "Corridor - x57y38z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y38z9.c",
  "south" : DIR+"/rooms/x57y37z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
