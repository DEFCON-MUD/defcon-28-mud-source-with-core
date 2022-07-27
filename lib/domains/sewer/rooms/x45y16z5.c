inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 5 }));
  set_short( "Corridor - x45y16z5" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y16z5.c",
  "north" : DIR+"/rooms/x45y17z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
