inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 14, 9 }));
  set_short( "Passage - x28y14z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y14z9.c",
  "east" : DIR+"/rooms/x29y14z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
