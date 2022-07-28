inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 2 }));
  set_short( "Passage - x15y20z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y20z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
