inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 56, 5 }));
  set_short( "Hallway - x49y56z5" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y56z5.c",
  "north" : DIR+"/rooms/x49y57z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
