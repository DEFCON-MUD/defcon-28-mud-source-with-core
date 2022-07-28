inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 0, 7 }));
  set_short( "Passage - x5y0z7" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y0z7.c",
  "east" : DIR+"/rooms/x6y0z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
