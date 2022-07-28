inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 2 }));
  set_short( "Passage - x41y10z2" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z2.c",
  "north" : DIR+"/rooms/x41y11z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
