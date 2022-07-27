inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 4 }));
  set_short( "Corridor - x15y24z4" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y24z4.c",
  "north" : DIR+"/rooms/x15y25z4.c",
  "south" : DIR+"/rooms/x15y23z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
