inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 16, 7 }));
  set_short( "Corridor - x18y16z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y16z7.c",
  "east" : DIR+"/rooms/x19y16z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
