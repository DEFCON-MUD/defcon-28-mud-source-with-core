inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 46, 2 }));
  set_short( "Corridor - x49y46z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y47z2.c",
  "south" : DIR+"/rooms/x49y45z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
