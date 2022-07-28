inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 16, 5 }));
  set_short( "Hallway - x50y16z5" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y16z5.c",
  "east" : DIR+"/rooms/x51y16z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
