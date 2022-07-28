inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 8, 4 }));
  set_short( "Corridor - x4y8z4" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y8z4.c",
  "east" : DIR+"/rooms/x5y8z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
