inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 46, 5 }));
  set_short( "Passage - x28y46z5" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y46z5.c",
  "east" : DIR+"/rooms/x29y46z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
