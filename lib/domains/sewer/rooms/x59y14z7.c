inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 7 }));
  set_short( "Corridor - x59y14z7" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y15z7.c",
  "south" : DIR+"/rooms/x59y13z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
