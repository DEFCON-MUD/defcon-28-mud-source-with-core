inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 42, 4 }));
  set_short( "Corridor - x40y42z4" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y42z4.c",
  "east" : DIR+"/rooms/x41y42z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
