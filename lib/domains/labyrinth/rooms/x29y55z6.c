inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 55, 6 }));
  set_short( "Hallway - x29y55z6" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y56z6.c",
  "south" : DIR+"/rooms/x29y54z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
