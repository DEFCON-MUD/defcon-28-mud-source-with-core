inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 22, 9 }));
  set_short( "Hallway - x46y22z9" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y22z9.c",
  "east" : DIR+"/rooms/x47y22z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
