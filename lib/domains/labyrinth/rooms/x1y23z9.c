inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 9 }));
  set_short( "Passage - x1y23z9" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z9.c",
  "south" : DIR+"/rooms/x1y22z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
