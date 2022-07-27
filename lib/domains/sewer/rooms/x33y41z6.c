inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 41, 6 }));
  set_short( "Hallway - x33y41z6" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y42z6.c",
  "south" : DIR+"/rooms/x33y40z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
