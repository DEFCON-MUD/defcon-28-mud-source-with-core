inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 25, 9 }));
  set_short( "Passage - x27y25z9" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y26z9.c",
  "south" : DIR+"/rooms/x27y24z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
