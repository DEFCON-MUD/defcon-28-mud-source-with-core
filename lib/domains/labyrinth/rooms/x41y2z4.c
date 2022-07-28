inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 2, 4 }));
  set_short( "Hallway - x41y2z4" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y2z4.c",
  "north" : DIR+"/rooms/x41y3z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
