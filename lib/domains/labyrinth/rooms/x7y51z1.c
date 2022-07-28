inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 51, 1 }));
  set_short( "Passage - x7y51z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y52z1.c",
  "south" : DIR+"/rooms/x7y50z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
