inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 16, 6 }));
  set_short( "Passage - x58y16z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y16z6.c",
  "east" : DIR+"/rooms/x59y16z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
