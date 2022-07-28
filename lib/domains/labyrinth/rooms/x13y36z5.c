inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 5 }));
  set_short( "Passage - x13y36z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y36z5.c",
  "east" : DIR+"/rooms/x14y36z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
