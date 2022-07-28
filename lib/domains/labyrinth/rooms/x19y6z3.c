inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 3 }));
  set_short( "Corridor - x19y6z3" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y7z3.c",
  "south" : DIR+"/rooms/x19y5z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
