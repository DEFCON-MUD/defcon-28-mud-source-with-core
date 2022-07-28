inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 53, 4 }));
  set_short( "Passage - x3y53z4" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y54z4.c",
  "south" : DIR+"/rooms/x3y52z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
