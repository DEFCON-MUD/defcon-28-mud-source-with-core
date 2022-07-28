inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 51, 3 }));
  set_short( "Hallway - x59y51z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y52z3.c",
  "south" : DIR+"/rooms/x59y50z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
