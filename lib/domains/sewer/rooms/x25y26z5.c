inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 26, 5 }));
  set_short( "Corridor - x25y26z5" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y26z5.c",
  "south" : DIR+"/rooms/x25y25z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
