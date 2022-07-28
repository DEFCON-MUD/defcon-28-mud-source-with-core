inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 1 }));
  set_short( "Passage - x53y56z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y56z1.c",
  "north" : DIR+"/rooms/x53y57z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
