inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 35, 5 }));
  set_short( "Passage - x45y35z5" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y36z5.c",
  "south" : DIR+"/rooms/x45y34z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
