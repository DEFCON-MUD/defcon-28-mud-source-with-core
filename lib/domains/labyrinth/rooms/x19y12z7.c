inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 7 }));
  set_short( "Corridor - x19y12z7" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y12z7.c",
  "south" : DIR+"/rooms/x19y11z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
