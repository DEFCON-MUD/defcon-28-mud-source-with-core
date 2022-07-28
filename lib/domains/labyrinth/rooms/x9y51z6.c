inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 51, 6 }));
  set_short( "Passage - x9y51z6" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y52z6.c",
  "south" : DIR+"/rooms/x9y50z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
