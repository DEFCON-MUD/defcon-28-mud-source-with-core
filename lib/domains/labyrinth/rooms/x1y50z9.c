inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 9 }));
  set_short( "Hallway - x1y50z9" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y51z9.c",
  "south" : DIR+"/rooms/x1y49z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
