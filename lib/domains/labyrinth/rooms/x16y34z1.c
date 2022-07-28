inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 34, 1 }));
  set_short( "Passage - x16y34z1" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y34z1.c",
  "east" : DIR+"/rooms/x17y34z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
