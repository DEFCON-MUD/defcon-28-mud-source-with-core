inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 40, 9 }));
  set_short( "Passage - x44y40z9" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y40z9.c",
  "east" : DIR+"/rooms/x45y40z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
