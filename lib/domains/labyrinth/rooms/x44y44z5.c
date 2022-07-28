inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 44, 5 }));
  set_short( "Hallway - x44y44z5" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y44z5.c",
  "east" : DIR+"/rooms/x45y44z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
