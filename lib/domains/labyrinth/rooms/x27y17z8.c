inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 17, 8 }));
  set_short( "Hallway - x27y17z8" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y18z8.c",
  "south" : DIR+"/rooms/x27y16z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
