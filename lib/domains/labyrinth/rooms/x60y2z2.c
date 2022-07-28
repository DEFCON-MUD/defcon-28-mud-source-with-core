inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 2 }));
  set_short( "Hallway - x60y2z2" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z2.c",
  "east" : DIR+"/rooms/x61y2z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
