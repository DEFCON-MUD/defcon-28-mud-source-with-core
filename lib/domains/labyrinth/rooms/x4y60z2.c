inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 2 }));
  set_short( "Hallway - x4y60z2" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z2.c",
  "east" : DIR+"/rooms/x5y60z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
