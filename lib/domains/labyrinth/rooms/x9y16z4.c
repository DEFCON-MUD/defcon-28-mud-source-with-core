inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 16, 4 }));
  set_short( "Hallway - x9y16z4" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y17z4.c",
  "south" : DIR+"/rooms/x9y15z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
