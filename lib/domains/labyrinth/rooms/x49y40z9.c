inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 9 }));
  set_short( "Passage - x49y40z9" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y40z9.c",
  "north" : DIR+"/rooms/x49y41z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
