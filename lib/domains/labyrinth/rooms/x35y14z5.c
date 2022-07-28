inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 5 }));
  set_short( "Corridor - x35y14z5" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y14z5.c",
  "south" : DIR+"/rooms/x35y13z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
