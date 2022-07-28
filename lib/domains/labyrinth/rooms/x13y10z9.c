inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 10, 9 }));
  set_short( "Passage - x13y10z9" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y10z9.c",
  "south" : DIR+"/rooms/x13y9z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
