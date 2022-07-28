inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 3 }));
  set_short( "Passage - x53y14z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y15z3.c",
  "south" : DIR+"/rooms/x53y13z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
