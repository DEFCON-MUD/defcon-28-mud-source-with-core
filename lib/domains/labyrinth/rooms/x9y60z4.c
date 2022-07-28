inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 4 }));
  set_short( "Corridor - x9y60z4" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z4.c",
  "east" : DIR+"/rooms/x10y60z4.c",
  "south" : DIR+"/rooms/x9y59z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
