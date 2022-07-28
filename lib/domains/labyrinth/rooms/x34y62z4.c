inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 62, 4 }));
  set_short( "Hallway - x34y62z4" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y62z4.c",
  "east" : DIR+"/rooms/x35y62z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
