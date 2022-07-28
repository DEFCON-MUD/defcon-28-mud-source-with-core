inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 8 }));
  set_short( "Passage - x15y7z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z8.c",
  "south" : DIR+"/rooms/x15y6z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
