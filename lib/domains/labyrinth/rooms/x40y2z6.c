inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 2, 6 }));
  set_short( "Passage - x40y2z6" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y2z6.c",
  "east" : DIR+"/rooms/x41y2z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
