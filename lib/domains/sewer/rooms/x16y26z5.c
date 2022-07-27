inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 26, 5 }));
  set_short( "Corridor - x16y26z5" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y26z5.c",
  "east" : DIR+"/rooms/x17y26z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
