inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 31, 9 }));
  set_short( "Passage - x5y31z9" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y32z9.c",
  "south" : DIR+"/rooms/x5y30z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
