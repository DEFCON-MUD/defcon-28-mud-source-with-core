inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 6 }));
  set_short( "Passage - x33y43z6" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z6.c",
  "south" : DIR+"/rooms/x33y42z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
