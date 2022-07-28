inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 18, 5 }));
  set_short( "Corridor - x36y18z5" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y18z5.c",
  "east" : DIR+"/rooms/x37y18z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
