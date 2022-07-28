inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 32, 9 }));
  set_short( "Passage - x60y32z9" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y32z9.c",
  "east" : DIR+"/rooms/x61y32z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
