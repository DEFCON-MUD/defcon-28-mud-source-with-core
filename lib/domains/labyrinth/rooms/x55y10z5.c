inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 5 }));
  set_short( "Corridor - x55y10z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y10z5.c",
  "east" : DIR+"/rooms/x56y10z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
