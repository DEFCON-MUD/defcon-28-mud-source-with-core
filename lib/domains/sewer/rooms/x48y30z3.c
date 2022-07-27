inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 30, 3 }));
  set_short( "Corridor - x48y30z3" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y30z3.c",
  "east" : DIR+"/rooms/x49y30z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
