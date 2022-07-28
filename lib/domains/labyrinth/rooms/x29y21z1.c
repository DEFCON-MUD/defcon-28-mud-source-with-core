inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 21, 1 }));
  set_short( "Corridor - x29y21z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y22z1.c",
  "south" : DIR+"/rooms/x29y20z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
