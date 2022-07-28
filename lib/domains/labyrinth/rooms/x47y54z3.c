inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 3 }));
  set_short( "Passage - x47y54z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y54z3.c",
  "north" : DIR+"/rooms/x47y55z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
