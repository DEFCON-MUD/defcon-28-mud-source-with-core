inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 6 }));
  set_short( "Passage - x7y2z6" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y2z6.c",
  "north" : DIR+"/rooms/x7y3z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
