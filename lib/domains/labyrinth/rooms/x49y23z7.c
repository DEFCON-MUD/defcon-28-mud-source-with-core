inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 23, 7 }));
  set_short( "Corridor - x49y23z7" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y24z7.c",
  "south" : DIR+"/rooms/x49y22z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
