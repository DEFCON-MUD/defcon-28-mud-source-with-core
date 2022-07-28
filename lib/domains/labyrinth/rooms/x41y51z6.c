inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 51, 6 }));
  set_short( "Passage - x41y51z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y52z6.c",
  "south" : DIR+"/rooms/x41y50z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
