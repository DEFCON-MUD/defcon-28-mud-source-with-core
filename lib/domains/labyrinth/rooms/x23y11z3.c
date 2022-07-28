inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 11, 3 }));
  set_short( "Hallway - x23y11z3" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y12z3.c",
  "south" : DIR+"/rooms/x23y10z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
