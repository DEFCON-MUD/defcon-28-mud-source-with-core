inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 24, 4 }));
  set_short( "Corridor - x16y24z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y24z4.c",
  "east" : DIR+"/rooms/x17y24z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
