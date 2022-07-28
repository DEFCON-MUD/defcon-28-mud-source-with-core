inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 3 }));
  set_short( "Hallway - x15y6z3" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y7z3.c",
  "south" : DIR+"/rooms/x15y5z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
