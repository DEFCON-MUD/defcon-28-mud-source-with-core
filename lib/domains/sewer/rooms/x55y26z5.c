inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 5 }));
  set_short( "Hallway - x55y26z5" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z5.c",
  "north" : DIR+"/rooms/x55y27z5.c",
  "south" : DIR+"/rooms/x55y25z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
