inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 37, 5 }));
  set_short( "Passage - x1y37z5" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y38z5.c",
  "south" : DIR+"/rooms/x1y36z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
