inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 10, 2 }));
  set_short( "Passage - x13y10z2" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y10z2.c",
  "north" : DIR+"/rooms/x13y11z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
