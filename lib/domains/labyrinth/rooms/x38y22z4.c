inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 22, 4 }));
  set_short( "Passage - x38y22z4" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y22z4.c",
  "east" : DIR+"/rooms/x39y22z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
