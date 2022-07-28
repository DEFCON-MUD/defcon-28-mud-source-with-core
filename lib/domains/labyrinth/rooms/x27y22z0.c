inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 0 }));
  set_short( "Passage - x27y22z0" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y23z0.c",
  "south" : DIR+"/rooms/x27y21z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
