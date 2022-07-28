inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 9 }));
  set_short( "Hallway - x11y40z9" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y40z9.c",
  "east" : DIR+"/rooms/x12y40z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
