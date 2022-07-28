inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 39, 8 }));
  set_short( "Passage - x25y39z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y40z8.c",
  "south" : DIR+"/rooms/x25y38z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
