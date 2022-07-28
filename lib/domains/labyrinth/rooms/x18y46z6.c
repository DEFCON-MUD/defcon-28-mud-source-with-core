inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 46, 6 }));
  set_short( "Hallway - x18y46z6" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y46z6.c",
  "east" : DIR+"/rooms/x19y46z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
