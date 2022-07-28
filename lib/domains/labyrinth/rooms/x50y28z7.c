inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 28, 7 }));
  set_short( "Corridor - x50y28z7" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y28z7.c",
  "east" : DIR+"/rooms/x51y28z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
