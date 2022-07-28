inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 46, 7 }));
  set_short( "Hallway - x49y46z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y46z7.c",
  "south" : DIR+"/rooms/x49y45z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
