inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 5 }));
  set_short( "Corridor - x28y0z5" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z5.c",
  "east" : DIR+"/rooms/x29y0z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
