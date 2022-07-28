inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 2 }));
  set_short( "Passage - x17y16z2" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y16z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
