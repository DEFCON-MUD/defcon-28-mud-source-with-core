inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 55, 0 }));
  set_short( "Passage - x9y55z0" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y56z0.c",
  "south" : DIR+"/rooms/x9y54z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
