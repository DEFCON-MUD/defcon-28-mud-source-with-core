inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 8 }));
  set_short( "Passage - x21y18z8" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y19z8.c",
  "south" : DIR+"/rooms/x21y17z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
