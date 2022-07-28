inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 51, 9 }));
  set_short( "Passage - x49y51z9" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y52z9.c",
  "south" : DIR+"/rooms/x49y50z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
