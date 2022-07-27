inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 2 }));
  set_short( "Hallway - x41y56z2" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z2.c",
  "north" : DIR+"/rooms/x41y57z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
