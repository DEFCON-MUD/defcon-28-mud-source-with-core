inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 2 }));
  set_short( "Hallway - x27y8z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y8z2.c",
  "north" : DIR+"/rooms/x27y9z2.c",
  "south" : DIR+"/rooms/x27y7z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
