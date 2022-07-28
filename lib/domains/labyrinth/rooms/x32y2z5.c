inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 2, 5 }));
  set_short( "Passage - x32y2z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y2z5.c",
  "east" : DIR+"/rooms/x33y2z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
