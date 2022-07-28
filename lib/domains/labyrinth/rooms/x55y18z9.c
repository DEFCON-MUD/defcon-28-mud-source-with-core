inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 18, 9 }));
  set_short( "Passage - x55y18z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y19z9.c",
  "south" : DIR+"/rooms/x55y17z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
