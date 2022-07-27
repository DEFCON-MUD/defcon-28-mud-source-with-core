inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 1 }));
  set_short( "Hallway - x47y62z1" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y62z1.c",
  "south" : DIR+"/rooms/x47y61z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
