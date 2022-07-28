inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 7 }));
  set_short( "Corridor - x53y46z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y46z7.c",
  "east" : DIR+"/rooms/x54y46z7.c",
  "north" : DIR+"/rooms/x53y47z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
