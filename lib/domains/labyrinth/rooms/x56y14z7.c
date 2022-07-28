inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 14, 7 }));
  set_short( "Passage - x56y14z7" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y14z7.c",
  "east" : DIR+"/rooms/x57y14z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
