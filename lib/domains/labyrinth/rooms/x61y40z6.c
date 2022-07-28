inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 6 }));
  set_short( "Corridor - x61y40z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y40z6.c",
  "south" : DIR+"/rooms/x61y39z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
