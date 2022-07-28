inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 6, 3 }));
  set_short( "Corridor - x31y6z3" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y6z3.c",
  "east" : DIR+"/rooms/x32y6z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
