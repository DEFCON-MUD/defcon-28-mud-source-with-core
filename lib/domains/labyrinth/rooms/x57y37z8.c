inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 37, 8 }));
  set_short( "Passage - x57y37z8" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y38z8.c",
  "south" : DIR+"/rooms/x57y36z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
