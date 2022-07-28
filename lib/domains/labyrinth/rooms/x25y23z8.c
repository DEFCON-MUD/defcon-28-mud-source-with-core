inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 23, 8 }));
  set_short( "Passage - x25y23z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y24z8.c",
  "south" : DIR+"/rooms/x25y22z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
