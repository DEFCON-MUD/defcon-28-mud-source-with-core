inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 5, 0 }));
  set_short( "Passage - x3y5z0" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y6z0.c",
  "south" : DIR+"/rooms/x3y4z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
