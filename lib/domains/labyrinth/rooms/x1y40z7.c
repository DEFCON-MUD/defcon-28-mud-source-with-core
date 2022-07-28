inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 7 }));
  set_short( "Hallway - x1y40z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z7.c",
  "south" : DIR+"/rooms/x1y39z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
