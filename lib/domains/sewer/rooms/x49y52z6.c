inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 6 }));
  set_short( "Corridor - x49y52z6" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y52z6.c",
  "north" : DIR+"/rooms/x49y53z6.c",
  "south" : DIR+"/rooms/x49y51z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
