inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 48, 6 }));
  set_short( "Corridor - x13y48z6" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y48z6.c",
  "north" : DIR+"/rooms/x13y49z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
