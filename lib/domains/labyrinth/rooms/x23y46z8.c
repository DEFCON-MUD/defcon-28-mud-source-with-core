inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 8 }));
  set_short( "Passage - x23y46z8" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y46z8.c",
  "east" : DIR+"/rooms/x24y46z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
