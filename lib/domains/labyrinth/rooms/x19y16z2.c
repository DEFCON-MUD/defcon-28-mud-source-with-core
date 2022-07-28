inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 2 }));
  set_short( "Hallway - x19y16z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y16z2.c",
  "south" : DIR+"/rooms/x19y15z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
