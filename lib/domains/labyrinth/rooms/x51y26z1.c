inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 1 }));
  set_short( "Corridor - x51y26z1" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y26z1.c",
  "north" : DIR+"/rooms/x51y27z1.c",
  "south" : DIR+"/rooms/x51y25z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
