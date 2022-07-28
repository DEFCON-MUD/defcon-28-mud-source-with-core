inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 40, 1 }));
  set_short( "Passage - x18y40z1" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y40z1.c",
  "east" : DIR+"/rooms/x19y40z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
