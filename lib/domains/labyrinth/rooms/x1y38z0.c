inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 0 }));
  set_short( "Corridor - x1y38z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z0.c",
  "south" : DIR+"/rooms/x1y37z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
