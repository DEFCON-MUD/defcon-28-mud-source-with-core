inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 1 }));
  set_short( "Passage - x31y56z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y57z1.c",
  "south" : DIR+"/rooms/x31y55z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
