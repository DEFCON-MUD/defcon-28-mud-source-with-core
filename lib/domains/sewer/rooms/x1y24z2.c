inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 2 }));
  set_short( "Passage - x1y24z2" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y24z2.c",
  "south" : DIR+"/rooms/x1y23z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
