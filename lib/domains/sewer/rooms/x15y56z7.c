inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 56, 7 }));
  set_short( "Corridor - x15y56z7" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y56z7.c",
  "east" : DIR+"/rooms/x16y56z7.c",
  "north" : DIR+"/rooms/x15y57z7.c",
  "south" : DIR+"/rooms/x15y55z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
