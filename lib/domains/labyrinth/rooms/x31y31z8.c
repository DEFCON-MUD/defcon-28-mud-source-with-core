inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 31, 8 }));
  set_short( "Corridor - x31y31z8" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y32z8.c",
  "south" : DIR+"/rooms/x31y30z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
