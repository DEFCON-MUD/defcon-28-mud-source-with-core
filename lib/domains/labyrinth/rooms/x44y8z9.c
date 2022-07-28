inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 8, 9 }));
  set_short( "Corridor - x44y8z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y8z9.c",
  "east" : DIR+"/rooms/x45y8z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
