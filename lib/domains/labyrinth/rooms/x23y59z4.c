inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 4 }));
  set_short( "Corridor - x23y59z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z4.c",
  "south" : DIR+"/rooms/x23y58z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
