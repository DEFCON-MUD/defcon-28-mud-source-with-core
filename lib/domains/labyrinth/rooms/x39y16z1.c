inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 1 }));
  set_short( "Passage - x39y16z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y16z1.c",
  "east" : DIR+"/rooms/x40y16z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
