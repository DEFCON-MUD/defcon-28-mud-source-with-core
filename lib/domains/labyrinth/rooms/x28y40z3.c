inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 40, 3 }));
  set_short( "Passage - x28y40z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y40z3.c",
  "east" : DIR+"/rooms/x29y40z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
