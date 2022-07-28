inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 7 }));
  set_short( "Corridor - x35y34z7" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y34z7.c",
  "south" : DIR+"/rooms/x35y33z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
