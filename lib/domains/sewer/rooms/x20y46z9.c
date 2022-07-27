inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 46, 9 }));
  set_short( "Passage - x20y46z9" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y46z9.c",
  "east" : DIR+"/rooms/x21y46z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
