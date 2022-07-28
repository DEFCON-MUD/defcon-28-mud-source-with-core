inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 51, 7 }));
  set_short( "Hallway - x9y51z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y52z7.c",
  "south" : DIR+"/rooms/x9y50z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
