inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 59, 6 }));
  set_short( "Hallway - x29y59z6" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y60z6.c",
  "south" : DIR+"/rooms/x29y58z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
