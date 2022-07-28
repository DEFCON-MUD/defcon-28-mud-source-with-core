inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 14, 8 }));
  set_short( "Passage - x40y14z8" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y14z8.c",
  "east" : DIR+"/rooms/x41y14z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
