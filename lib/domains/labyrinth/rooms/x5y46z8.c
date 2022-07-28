inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 8 }));
  set_short( "Passage - x5y46z8" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y46z8.c",
  "south" : DIR+"/rooms/x5y45z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
