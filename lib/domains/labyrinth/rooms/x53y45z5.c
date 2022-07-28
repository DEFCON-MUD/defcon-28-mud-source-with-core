inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 45, 5 }));
  set_short( "Passage - x53y45z5" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y46z5.c",
  "south" : DIR+"/rooms/x53y44z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
