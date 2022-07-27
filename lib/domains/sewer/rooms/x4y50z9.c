inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 50, 9 }));
  set_short( "Passage - x4y50z9" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y50z9.c",
  "east" : DIR+"/rooms/x5y50z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
