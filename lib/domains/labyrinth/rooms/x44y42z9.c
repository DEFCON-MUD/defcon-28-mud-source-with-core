inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 42, 9 }));
  set_short( "Hallway - x44y42z9" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y42z9.c",
  "east" : DIR+"/rooms/x45y42z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
