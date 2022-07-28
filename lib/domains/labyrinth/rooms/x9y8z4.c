inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 4 }));
  set_short( "Passage - x9y8z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y8z4.c",
  "south" : DIR+"/rooms/x9y7z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
