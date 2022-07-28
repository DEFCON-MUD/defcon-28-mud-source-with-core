inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 18, 1 }));
  set_short( "Passage - x25y18z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y19z1.c",
  "south" : DIR+"/rooms/x25y17z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
