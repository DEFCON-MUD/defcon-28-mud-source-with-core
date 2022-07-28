inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 16, 6 }));
  set_short( "Passage - x54y16z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y16z6.c",
  "east" : DIR+"/rooms/x55y16z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
