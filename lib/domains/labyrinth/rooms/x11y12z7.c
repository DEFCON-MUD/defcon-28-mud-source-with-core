inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 12, 7 }));
  set_short( "Passage - x11y12z7" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y12z7.c",
  "east" : DIR+"/rooms/x12y12z7.c",
  "south" : DIR+"/rooms/x11y11z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
