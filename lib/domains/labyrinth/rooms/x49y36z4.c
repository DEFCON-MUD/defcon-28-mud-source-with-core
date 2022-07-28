inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 36, 4 }));
  set_short( "Corridor - x49y36z4" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y37z4.c",
  "south" : DIR+"/rooms/x49y35z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
