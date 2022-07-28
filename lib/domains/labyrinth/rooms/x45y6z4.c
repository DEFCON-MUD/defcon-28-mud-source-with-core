inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 4 }));
  set_short( "Passage - x45y6z4" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y6z4.c",
  "east" : DIR+"/rooms/x46y6z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
