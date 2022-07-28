inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 8 }));
  set_short( "Hallway - x27y22z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y23z8.c",
  "south" : DIR+"/rooms/x27y21z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
