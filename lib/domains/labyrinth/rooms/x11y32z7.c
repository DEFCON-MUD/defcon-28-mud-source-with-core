inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 7 }));
  set_short( "Passage - x11y32z7" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y33z7.c",
  "south" : DIR+"/rooms/x11y31z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
