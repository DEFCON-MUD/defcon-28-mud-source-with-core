inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 2 }));
  set_short( "Passage - x27y54z2" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y55z2.c",
  "south" : DIR+"/rooms/x27y53z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
