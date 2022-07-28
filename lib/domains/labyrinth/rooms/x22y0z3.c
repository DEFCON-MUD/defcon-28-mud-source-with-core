inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 3 }));
  set_short( "Hallway - x22y0z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z3.c",
  "east" : DIR+"/rooms/x23y0z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
