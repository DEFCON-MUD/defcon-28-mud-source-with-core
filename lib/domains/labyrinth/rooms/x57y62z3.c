inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 3 }));
  set_short( "Hallway - x57y62z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z3.c",
  "east" : DIR+"/rooms/x58y62z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
