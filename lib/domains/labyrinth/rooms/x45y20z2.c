inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 2 }));
  set_short( "Passage - x45y20z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y20z2.c",
  "north" : DIR+"/rooms/x45y21z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
