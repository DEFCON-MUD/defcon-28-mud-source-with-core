inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 3 }));
  set_short( "Corridor - x49y54z3" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y54z3.c",
  "east" : DIR+"/rooms/x50y54z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
