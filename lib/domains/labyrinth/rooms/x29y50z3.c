inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 3 }));
  set_short( "Passage - x29y50z3" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y50z3.c",
  "east" : DIR+"/rooms/x30y50z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
