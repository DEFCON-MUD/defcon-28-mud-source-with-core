inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 62, 2 }));
  set_short( "Passage - x40y62z2" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y62z2.c",
  "east" : DIR+"/rooms/x41y62z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
