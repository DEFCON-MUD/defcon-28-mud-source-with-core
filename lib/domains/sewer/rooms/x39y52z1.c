inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 1 }));
  set_short( "Corridor - x39y52z1" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y52z1.c",
  "south" : DIR+"/rooms/x39y51z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
