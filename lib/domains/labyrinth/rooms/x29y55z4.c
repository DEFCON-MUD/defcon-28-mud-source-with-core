inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 55, 4 }));
  set_short( "Corridor - x29y55z4" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y56z4.c",
  "south" : DIR+"/rooms/x29y54z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
