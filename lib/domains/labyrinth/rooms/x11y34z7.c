inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 7 }));
  set_short( "Passage - x11y34z7" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y35z7.c",
  "south" : DIR+"/rooms/x11y33z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
