inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 27, 8 }));
  set_short( "Hallway - x45y27z8" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y28z8.c",
  "south" : DIR+"/rooms/x45y26z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
