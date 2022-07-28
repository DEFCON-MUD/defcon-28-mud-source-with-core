inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 6 }));
  set_short( "Passage - x57y13z6" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z6.c",
  "south" : DIR+"/rooms/x57y12z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
