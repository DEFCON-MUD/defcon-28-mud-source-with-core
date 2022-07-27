inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 50, 3 }));
  set_short( "Corridor - x11y50z3" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y50z3.c",
  "north" : DIR+"/rooms/x11y51z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
