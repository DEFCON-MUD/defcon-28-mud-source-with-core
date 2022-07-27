inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 29, 4 }));
  set_short( "Passage - x21y29z4" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y30z4.c",
  "south" : DIR+"/rooms/x21y28z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
