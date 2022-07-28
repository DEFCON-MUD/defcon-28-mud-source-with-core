inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 3 }));
  set_short( "Hallway - x29y40z3" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z3.c",
  "east" : DIR+"/rooms/x30y40z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
