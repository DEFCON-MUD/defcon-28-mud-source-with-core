inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 2 }));
  set_short( "Hallway - x17y4z2" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "south" : DIR+"/rooms/x17y3z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
