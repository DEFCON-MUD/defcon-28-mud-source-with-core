inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 29, 5 }));
  set_short( "Corridor - x27y29z5" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y30z5.c",
  "south" : DIR+"/rooms/x27y28z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
