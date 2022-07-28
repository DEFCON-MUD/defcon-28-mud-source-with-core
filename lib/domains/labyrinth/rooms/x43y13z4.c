inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 13, 4 }));
  set_short( "Corridor - x43y13z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y14z4.c",
  "south" : DIR+"/rooms/x43y12z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
