inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 55, 7 }));
  set_short( "Passage - x55y55z7" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y56z7.c",
  "south" : DIR+"/rooms/x55y54z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
