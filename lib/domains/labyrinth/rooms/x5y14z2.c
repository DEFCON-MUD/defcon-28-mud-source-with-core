inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 2 }));
  set_short( "Corridor - x5y14z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y14z2.c",
  "north" : DIR+"/rooms/x5y15z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
