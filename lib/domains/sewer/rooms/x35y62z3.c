inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 3 }));
  set_short( "Corridor - x35y62z3" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z3.c",
  "east" : DIR+"/rooms/x36y62z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
