inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 6 }));
  set_short( "Hallway - x35y36z6" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z6.c",
  "east" : DIR+"/rooms/x36y36z6.c",
  "north" : DIR+"/rooms/x35y37z6.c",
  "south" : DIR+"/rooms/x35y35z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
