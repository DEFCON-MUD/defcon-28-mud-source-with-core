inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 5 }));
  set_short( "Corridor - x7y60z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y60z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
