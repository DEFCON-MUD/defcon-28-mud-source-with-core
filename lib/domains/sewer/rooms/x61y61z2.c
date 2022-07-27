inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 61, 2 }));
  set_short( "Hallway - x61y61z2" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y62z2.c",
  "south" : DIR+"/rooms/x61y60z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
