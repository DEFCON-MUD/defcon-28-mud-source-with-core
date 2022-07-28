inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 7 }));
  set_short( "Passage - x59y34z7" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y34z7.c",
  "east" : DIR+"/rooms/x60y34z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
