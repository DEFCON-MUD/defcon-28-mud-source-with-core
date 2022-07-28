inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 2, 1 }));
  set_short( "Hallway - x12y2z1" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y2z1.c",
  "east" : DIR+"/rooms/x13y2z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
