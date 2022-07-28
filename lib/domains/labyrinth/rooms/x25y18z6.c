inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 18, 6 }));
  set_short( "Hallway - x25y18z6" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y18z6.c",
  "east" : DIR+"/rooms/x26y18z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
