inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 7 }));
  set_short( "Corridor - x53y20z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y20z7.c",
  "south" : DIR+"/rooms/x53y19z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
