inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 5 }));
  set_short( "Passage - x61y57z5" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z5.c",
  "south" : DIR+"/rooms/x61y56z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
