inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 13, 7 }));
  set_short( "Corridor - x31y13z7" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y14z7.c",
  "south" : DIR+"/rooms/x31y12z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
