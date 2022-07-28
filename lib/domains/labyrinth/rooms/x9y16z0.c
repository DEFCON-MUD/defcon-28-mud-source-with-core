inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 16, 0 }));
  set_short( "Passage - x9y16z0" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y16z0.c",
  "east" : DIR+"/rooms/x10y16z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
