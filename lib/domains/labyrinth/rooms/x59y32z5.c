inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 32, 5 }));
  set_short( "Passage - x59y32z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y33z5.c",
  "south" : DIR+"/rooms/x59y31z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
