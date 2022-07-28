inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 5, 0 }));
  set_short( "Corridor - x17y5z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y6z0.c",
  "south" : DIR+"/rooms/x17y4z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
