inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 0 }));
  set_short( "Corridor - x49y54z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y54z0.c",
  "north" : DIR+"/rooms/x49y55z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
