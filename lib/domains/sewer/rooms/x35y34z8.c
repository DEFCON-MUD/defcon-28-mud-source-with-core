inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 8 }));
  set_short( "Corridor - x35y34z8" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y34z8.c",
  "north" : DIR+"/rooms/x35y35z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
