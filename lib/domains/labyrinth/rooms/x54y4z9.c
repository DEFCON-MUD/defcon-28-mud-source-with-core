inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 4, 9 }));
  set_short( "Hallway - x54y4z9" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y4z9.c",
  "east" : DIR+"/rooms/x55y4z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
