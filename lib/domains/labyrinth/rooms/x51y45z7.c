inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 45, 7 }));
  set_short( "Passage - x51y45z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y46z7.c",
  "south" : DIR+"/rooms/x51y44z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
