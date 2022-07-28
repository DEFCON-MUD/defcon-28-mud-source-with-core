inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 5 }));
  set_short( "Passage - x35y54z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y55z5.c",
  "south" : DIR+"/rooms/x35y53z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
