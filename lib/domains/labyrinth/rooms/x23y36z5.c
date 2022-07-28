inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 5 }));
  set_short( "Passage - x23y36z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y36z5.c",
  "south" : DIR+"/rooms/x23y35z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
