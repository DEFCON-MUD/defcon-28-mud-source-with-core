inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 6 }));
  set_short( "Corridor - x25y44z6" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y44z6.c",
  "north" : DIR+"/rooms/x25y45z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
