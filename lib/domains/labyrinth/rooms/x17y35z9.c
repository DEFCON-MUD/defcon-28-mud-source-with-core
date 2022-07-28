inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 35, 9 }));
  set_short( "Corridor - x17y35z9" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y36z9.c",
  "south" : DIR+"/rooms/x17y34z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
