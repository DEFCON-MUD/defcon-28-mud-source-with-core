inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 58, 6 }));
  set_short( "Passage - x43y58z6" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y58z6.c",
  "east" : DIR+"/rooms/x44y58z6.c",
  "north" : DIR+"/rooms/x43y59z6.c",
  "south" : DIR+"/rooms/x43y57z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
