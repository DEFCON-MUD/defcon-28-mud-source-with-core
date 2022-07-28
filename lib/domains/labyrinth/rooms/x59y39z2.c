inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 2 }));
  set_short( "Passage - x59y39z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z2.c",
  "south" : DIR+"/rooms/x59y38z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
