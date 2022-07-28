inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 4 }));
  set_short( "Hallway - x23y16z4" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y16z4.c",
  "south" : DIR+"/rooms/x23y15z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
