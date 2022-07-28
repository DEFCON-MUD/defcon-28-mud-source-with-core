inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 44, 7 }));
  set_short( "Corridor - x10y44z7" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y44z7.c",
  "east" : DIR+"/rooms/x11y44z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
