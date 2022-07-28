inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 20, 5 }));
  set_short( "Corridor - x21y20z5" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y21z5.c",
  "south" : DIR+"/rooms/x21y19z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
