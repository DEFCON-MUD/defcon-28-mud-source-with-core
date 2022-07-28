inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 7 }));
  set_short( "Passage - x11y36z7" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y36z7.c",
  "south" : DIR+"/rooms/x11y35z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
