inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 4 }));
  set_short( "Corridor - x41y46z4" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y46z4.c",
  "east" : DIR+"/rooms/x42y46z4.c",
  "north" : DIR+"/rooms/x41y47z4.c",
  "south" : DIR+"/rooms/x41y45z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
