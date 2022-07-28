inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 26, 8 }));
  set_short( "Passage - x12y26z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y26z8.c",
  "east" : DIR+"/rooms/x13y26z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
