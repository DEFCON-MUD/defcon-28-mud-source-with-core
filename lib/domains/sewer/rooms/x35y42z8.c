inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 8 }));
  set_short( "Hallway - x35y42z8" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z8.c",
  "north" : DIR+"/rooms/x35y43z8.c",
  "south" : DIR+"/rooms/x35y41z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
