inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 5, 3 }));
  set_short( "Hallway - x25y5z3" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y6z3.c",
  "south" : DIR+"/rooms/x25y4z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
