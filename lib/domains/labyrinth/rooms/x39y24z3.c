inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 3 }));
  set_short( "Hallway - x39y24z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y24z3.c",
  "south" : DIR+"/rooms/x39y23z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
