inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 43, 3 }));
  set_short( "Hallway - x59y43z3" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y44z3.c",
  "south" : DIR+"/rooms/x59y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
