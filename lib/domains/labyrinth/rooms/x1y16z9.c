inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 9 }));
  set_short( "Passage - x1y16z9" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y16z9.c",
  "south" : DIR+"/rooms/x1y15z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
