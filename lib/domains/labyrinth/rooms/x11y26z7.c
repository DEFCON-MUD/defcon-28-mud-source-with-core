inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 7 }));
  set_short( "Hallway - x11y26z7" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z7.c",
  "north" : DIR+"/rooms/x11y27z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
