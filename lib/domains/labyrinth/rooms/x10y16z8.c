inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 16, 8 }));
  set_short( "Hallway - x10y16z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y16z8.c",
  "east" : DIR+"/rooms/x11y16z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
