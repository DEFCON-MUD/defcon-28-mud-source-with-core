inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 9, 3 }));
  set_short( "Hallway - x7y9z3" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y10z3.c",
  "south" : DIR+"/rooms/x7y8z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
