inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 7 }));
  set_short( "Passage - x11y40z7" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y41z7.c",
  "south" : DIR+"/rooms/x11y39z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
