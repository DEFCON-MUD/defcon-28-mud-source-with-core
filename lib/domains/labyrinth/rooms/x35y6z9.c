inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 9 }));
  set_short( "Corridor - x35y6z9" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y6z9.c",
  "north" : DIR+"/rooms/x35y7z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
