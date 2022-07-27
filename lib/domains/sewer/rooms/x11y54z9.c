inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 9 }));
  set_short( "Corridor - x11y54z9" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y54z9.c",
  "east" : DIR+"/rooms/x12y54z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
