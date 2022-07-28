inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 3 }));
  set_short( "Hallway - x5y52z3" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y52z3.c",
  "east" : DIR+"/rooms/x6y52z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
