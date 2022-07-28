inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 8 }));
  set_short( "Passage - x27y7z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z8.c",
  "south" : DIR+"/rooms/x27y6z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
