inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 42, 3 }));
  set_short( "Hallway - x2y42z3" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y42z3.c",
  "east" : DIR+"/rooms/x3y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
