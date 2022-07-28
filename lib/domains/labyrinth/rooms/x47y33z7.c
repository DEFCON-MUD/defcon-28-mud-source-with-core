inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 33, 7 }));
  set_short( "Passage - x47y33z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y34z7.c",
  "south" : DIR+"/rooms/x47y32z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
