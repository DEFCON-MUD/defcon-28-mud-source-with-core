inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 26, 9 }));
  set_short( "Hallway - x60y26z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y26z9.c",
  "east" : DIR+"/rooms/x61y26z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
