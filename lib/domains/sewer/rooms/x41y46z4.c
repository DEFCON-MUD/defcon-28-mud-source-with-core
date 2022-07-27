inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 4 }));
  set_short( "Corridor - x41y46z4" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y46z4.c",
  "east" : DIR+"/rooms/x42y46z4.c",
  "north" : DIR+"/rooms/x41y47z4.c",
  "south" : DIR+"/rooms/x41y45z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
