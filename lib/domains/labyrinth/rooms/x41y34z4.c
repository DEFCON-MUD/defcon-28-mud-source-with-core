inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 4 }));
  set_short( "Corridor - x41y34z4" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y34z4.c",
  "south" : DIR+"/rooms/x41y33z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
