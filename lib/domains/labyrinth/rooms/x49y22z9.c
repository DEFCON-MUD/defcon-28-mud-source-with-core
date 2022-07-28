inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 9 }));
  set_short( "Passage - x49y22z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z9.c",
  "north" : DIR+"/rooms/x49y23z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
