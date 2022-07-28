inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 2 }));
  set_short( "Passage - x29y56z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y56z2.c",
  "north" : DIR+"/rooms/x29y57z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
