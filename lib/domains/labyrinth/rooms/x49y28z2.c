inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 2 }));
  set_short( "Hallway - x49y28z2" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y28z2.c",
  "south" : DIR+"/rooms/x49y27z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
