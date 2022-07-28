inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 7, 2 }));
  set_short( "Passage - x47y7z2" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y8z2.c",
  "south" : DIR+"/rooms/x47y6z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
